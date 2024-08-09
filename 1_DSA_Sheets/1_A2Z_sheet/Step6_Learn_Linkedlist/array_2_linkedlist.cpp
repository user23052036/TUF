#include<bits/stdc++.h>
using namespace std;

class Node   //class and struct can be used intercangebally but class comes with oops
{
    public:
        int data;
        Node *next;

        Node(int data1, Node *next1)  //constuctor
        {
            data=data1;
            next=next1;
        }
        Node(int data1)  //constructor
        {
            data=data1;
            next=nullptr;
        }
};

Node* array_2_LL(vector<int>arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i=1; i<arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print_LL(Node *head)
{
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int count_LL(Node *head)
{
    int count=0;
    Node *temp=head;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool search_LL(Node *head, int k)
{
    Node *temp=head;
    while(temp)
    {
        if(temp->data == k) return true;
        temp = temp->next;
    }
    return false;
}

Node* delete_head_LL(Node *head)
{
    Node *temp = head;
    temp = temp->next;

    delete(head);
    return temp;
}

Node* delete_tail_LL(Node *head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL)
    {
        delete(head);
        return head;
    }

    Node *temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    delete(temp->next);
    temp->next = nullptr;
    return head;
}

Node* delete_LL(Node *head, int k)  // k is which element to delete 1-based indexing
{
    if(k==1) delete_head_LL(head);
    else if(k == count_LL(head)) delete_tail_LL(head);
    else if(k>count_LL(head)) return head;
    else
    {
        Node *temp = head;
        k--;
        while(--k)
            temp = temp->next;
        temp->next = temp->next->next;
        delete(temp->next);
    }
    return head;
}

int main()
{
    vector<int>arr{1,7,5,6,3,9};
    Node *head = array_2_LL(arr);                   
    return 0;
}