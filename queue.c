#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 30
int queue[MAXSIZE];
int front=0,rear=-1;


void display();
void insert();
void delete1();
void main()
{
    int choice;
    do
    {
        printf("\n\n\n--------QUEUE----------\n");
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n\n");

        printf("choose option:--->");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete1();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("enter a valid choice:--->");
        }
    }while(choice != 4);
}

void insert()
{
    if(rear == MAXSIZE-1)
        printf("queue overflow\n");
    else
    {
        printf("Enter your number:--->");
        scanf("%d",&queue[++rear]);
    }
}

void delete1()
{
    if(front > rear)
        printf("Empty queue\n");
    else
    {
        printf("%d is removed",queue[front++]);
    }
}

void display()
{
    if(front > rear)
        printf("Empty queue\n");
    else
    {
        printf("Following are the elements in queue:--->");
        for(int i=front; i<=rear; i++)
            printf("%d ",queue[i]);
    }
}