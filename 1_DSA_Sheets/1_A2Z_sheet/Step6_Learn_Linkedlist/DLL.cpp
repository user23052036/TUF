#include<iostream>
#include<vector>
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
int size_DLL(Node*);
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

Node* delete_head(Node *head)
{
    if(head == nullptr) return head;
    if(head->next == nullptr)
    {
        delete(head);
        return nullptr;
    }
    
    Node *temp = head;
    head = head->next;

    temp->next = nullptr;
    head->back = nullptr;

    delete(temp);
    return (head);
}

Node* delete_tail(Node *head)
{
    if(head == nullptr) return head;
    if(head->next == nullptr)
    {
        delete(head);
        return nullptr;
    }

    Node *tail = head;
    while(tail->next != nullptr)
        tail = tail->next;
    Node *prev = tail->back;

    prev->next = nullptr;
    tail->next = nullptr;
    delete(tail);
    return head;
}

Node* delete_kth_element(Node *head, int k)
{
    Node *current = head;
    int cnt=0;

    while(current != nullptr)
    {
        cnt++;
        if(cnt==k)break;
        current = current->next;
    }
    Node *prev = current->back;
    Node *front = current->next;

    if(prev==nullptr)
        return delete_head(head);
    if(front==nullptr)
        return delete_tail(head);
    else
    {
        prev->next = front;
        front->back = prev;

        current->back=nullptr;
        current->next=nullptr;

        delete(current);
    }
    return(head);
}

void delete_Node(Node *node)
{
    if(node==nullptr) return;
    Node *prev = node->back;
    Node *front = node->next;

    if(prev == nullptr && front == nullptr) delete(node);
    else if(prev == nullptr)
    {
        front->back = nullptr;
        delete (node);
    }
    else if(front == nullptr)
    {
        prev->next = nullptr;
        delete (node);
    }
    else
    {
        prev->next = front;
        front->back = prev;

        node->next = nullptr;
        node->back = nullptr;

        delete(node);
    }
}

Node* insert_Node(Node *head, int pos, int element)
{
    int size = size_DLL(head);
    if(pos<=0 || pos>size) return head;

    Node *curr = head;
    int cnt=0;
    while(cnt != pos-1)
    {
        curr = curr->next;
        cnt++;
    }
    Node *prev = curr->back;
    Node *after = curr->next;

    if(prev == NULL && after ==NULL)
        curr = new Node(element);
    else if(prev ==NULL)
    {
        curr = new Node(element,nullptr,curr);
        after->back = curr;
    }
    else
    {
        Node *newNode = new Node(element,prev,curr);
        prev->next = newNode;
        after->back = newNode;
        return head;
    }
    return curr;
}

int size_DLL(Node *head)
{
    int cnt=0;
    Node *temp=head;
    while(temp->next != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main()
{
    vector<int> arr={7,1,3,0,2,15,55,90,8};
    Node *head = arr2DLL(arr);

    print(head);
    head = delete_head(head);
    print(head);
    head = delete_tail(head);
    print(head);
    head = insert_Node(head,2,43);
    print(head);

    return 0;
}