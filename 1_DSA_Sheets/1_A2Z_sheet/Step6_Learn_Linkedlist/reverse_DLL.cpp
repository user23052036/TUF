#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *back;
        Node *next;

        Node(int data1)
        {
            data=data1;
            next=nullptr;
            back=nullptr;
        }

        Node(int data1, Node *back1, Node *next1)
        {
            data=data1;
            next=next1;
            back=back1;
        }
};

Node* arr2DLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for(int i=1; i<arr.size(); i++)
    {
        Node *temp = new Node(arr[i],prev,nullptr);
        prev->next = temp;
        prev = temp;
    }
    return (head);
}

void print(Node *head)
{
    Node *temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

Node* reverse(Node *head)
{
    Node *mover = head;
    Node *prev = NULL;
    while(mover != NULL)
    {
        prev = mover->back;
        mover->back = mover->next;
        mover->next = prev;

        mover = mover->back;
    }
    return (prev->back);
}

int main()
{
    vector<int> arr={3,6,4,5,9,12,6,11};
    Node *head = arr2DLL(arr);
    print(head);
    head = reverse(head);
    print(head);
    return 0;
}