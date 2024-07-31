#include<bits/stdc++.h>
using namespace std;
queue<int> q1, q2;

void push(int x)
{
    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1,q2);
}

void display()
{
    if(!q1.empty())
    {
        queue<int>temp=q1;
        cout<<"Following are the elements in the stack:\n";
        cout<<"top-> ";
        while(!temp.empty())
        {
            cout<<"| "<<temp.front()<<" |";
            temp.pop();
        }
        cout<<" <--bottom";
        cout<<"\n\n";
    }
}

int main()
{
    while(1)
    {
        system("cls");
        display();

        cout<<"---------------MENU-----------------\n";
        cout<<"1. Push element into statck\n";
        cout<<"2. PoP element from statck\n";
        cout<<"3. View the top element in stack\n";
        cout<<"4. Exit menu\n\n";

        cout<<"Enter your choice:--->";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"ENter a number:->";
                int x;
                cin>>x;
                push(x);
                break;
            }
            case 2:
            {
                if(!q1.empty())
                    q1.pop();
                else cout<<"Stack is empty\n";
                break;
            }
            case 3:
            {
                if(!q1.empty())
                    q1.front();
                else cout<<"Stack is empty\n";
                break;
            }
        }
        if(choice>=4 && choice<1) break;
    }
    return 0;
}