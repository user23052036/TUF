#include<iostream>
using namespace std;
#define MAXSIZE 10
int queue[MAXSIZE];
int front=-1,back=-1,cnt=0;

void insert(int x)
{
    if(cnt == MAXSIZE) cout<<"Queue is Overflown\n";
    else
    {
        back = (back+1)%MAXSIZE;
        cnt++;
        queue[back]=x;
    }
}

void delete1()
{
    if(front == -1 || cnt==0) cout<<"Queue is empty\n";
    else
    {
        cout<<queue[front]<<"is removed\n";
        front = (front+1)%MAXSIZE;
        cnt--;
    }
}

void display()
{
    if(front == -1 || cnt==0) cout<<"Queue is empty\n";
    else
    {
        int i;
        cout<<"Following are the elements in queue:---> ";
        for(i=front; i!=back; i=(i+1)%MAXSIZE)
            cout<<queue[i]<<" ";
        cout<<queue[i]<<"\n\n";
    }
}

int main()
{
    while(1)
    {
        cout<<"\n---------------MENU-----------------\n";
        cout<<"1. Push element into queue\n";
        cout<<"2. PoP element from queue\n";
        cout<<"3. Display all the elements in queue\n";
        cout<<"4. Exit menu\n";

        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"ENter a number:->";
                int x;
                cin>>x;
                insert(x);
                break;
            }
            case 2:
            {
                delete1();
                break;
            }
            case 3:
            {
                display();
                break;
            }
        }
        if(choice>=5 && choice<1) break;
    }
    return 0;
}