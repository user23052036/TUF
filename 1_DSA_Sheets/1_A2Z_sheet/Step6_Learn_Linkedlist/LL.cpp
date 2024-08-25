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
    if(head == NULL) return head;

    Node *temp = head;
    head = head->next;

    delete(temp);
    return head;
}

Node* insert_head_LL(Node *head, int val)
{
    return (new Node(val,head));
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

Node* insert_tail_LL(Node *head, int val)
{
    if(head == NULL) return (new Node(val));

    Node *temp=head;
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = new Node(val);
    return head;
}

Node* delete_LL(Node *head, int k)  // k is which element to delete 1-based indexing
{
    if(k==1) return delete_head_LL(head);
    else if(k == count_LL(head)) return delete_tail_LL(head);
    else if(k>count_LL(head)) return head;

    Node *temp = head;
    k--;
    while(--k)
        temp = temp->next;

    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete(delete_node);
    return head;
}

Node* insert_LL(Node *head, int val, int pos)
{
    if(pos == 1) 
    {
        if(head==NULL)
            return (new Node(val));
        return (new Node(val,head));
    }

    int size = count_LL(head);
    if(pos <= size+1)
    {
        if(pos==size+1) return insert_tail_LL(head,val);

        int cnt=2;
        Node *temp=head;
        while(pos != cnt)
        {
            temp = temp->next;
            cnt++;
        }
        temp->next = new Node(val,temp->next);
    }
    return head;
}

Node* delete_LL_val(Node *head, int val)  // k is which element to delete 1-based indexing
{
    if(head == NULL) return head;
    if(head->data == val) return delete_head_LL(head);
    
    Node *temp = head;
    while(temp->next != NULL && temp->next->data != val)
        temp = temp->next;

    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete(delete_node);
    return head;
}

int main()
{
    vector<int>arr{1,7,5,6,3,9};
    Node *head = array_2_LL(arr); 

    head = insert_LL(head,43,3);
    print_LL(head);                  
    return 0;
}