//we can make is more efficient by defining the isEmpty() function 

#include<iostream>
using namespace std;
#define MAXSIZE 15
int top=-1,array[MAXSIZE];


void push(int x)
{
    if(top==MAXSIZE) cout<<"Stack Overflow\n";
    else array[++top]=x;
}
void pop()
{
    if(top==-1) cout<<"We have an empty stack\n";
    else
    {
        cout<<"Element"<<array[top]<<"has been removed\n";
        top--;
    }
}
void display()
{
    if(top==-1) cout<<"We have an empty stack\n";
    else
    {
        cout<<"Following are the elements of the stack\n";
        for(int i=top; i>=top; i--)
            cout<<array[i]<<" ";
        cout<<"\n\n";
    }
}

void TOP()
{
    if(top==-1) cout<<"We have an empty stack\n";
    else
        cout<<"Top element in stack--> "<<array[top]<<"\n\n";
}

int main()
{
    while(1)
    {
        cout<<"\n---------------MENU-----------------\n";
        cout<<"1. Push element into statck\n";
        cout<<"2. PoP element from statck\n";
        cout<<"3. View the top element in stack\n";
        cout<<"4. Display all the elements in stack\n";
        cout<<"5. Exit menu\n";

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
                pop();
                break;
            }
            case 3:
            {
                TOP();
                break;
            }
            case 4:
            {
                display();
                break;
            }
        }
        if(choice>=5 && choice<1) break;
    }
    return 0;
}