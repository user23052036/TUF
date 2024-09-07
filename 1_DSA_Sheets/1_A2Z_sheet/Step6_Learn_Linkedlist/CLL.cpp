#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        Node(int data1)
        {
            data=data1;
            next=nullptr;
        }
        Node(int data1, Node *next1)
        {
            data=data1;
            next=next1;
        }
};

Node* arr2CLL(vector<int>);
void printCLL(Node*);
int main()
{
    vector<int>arr = {2,6,4,5,8,7};
    Node *tail = arr2CLL(arr);
    printCLL(tail);
    return 0;
}

Node* arr2CLL(vector<int> arr)
{
    Node *tail = new Node(arr[0],tail);
    Node *mover=tail;
    
    for(int i=1; i<arr.size(); i++)
    {
        Node *temp = new Node(arr[i],tail);
        mover->next = temp;
        mover = temp;
    }
    return mover;
}

void printCLL(Node *tail)
{
    Node *head = tail->next;
    do
    {
        cout<<"["<<head->data<<"]-> ";
        head = head->next;
    }while(head != tail->next);
    cout<<"\n";
}