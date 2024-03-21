#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int c_queue[MAXSIZE],front=0,rear=-1;


void display();
void insert();
void delete1();
void main()
{
    int choice;
    do
    {
        printf("\n\n\n--------CIRCULAR QUEUE----------\n");
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
        system("clear");
    }while(choice != 4);
}

void insert()
{
    if((rear+1)%MAXSIZE == front && rear != -1)
        printf("circular queue overflown\n");
    else
    {
        printf("Enter your number:--->");
        rear = (rear+1)%MAXSIZE;
        scanf("%d",&c_queue[rear]);
        display();
    }
}

void delete1()
{
    if(rear == -1)
        printf("circular queue empty\n");
    else
    {
        printf("%d is removed\n",c_queue[front]);

        if(front==rear)                            // as the delete function is completely empty 
        {                            // we bring back front and rear to the initial condition
            front=0;
            rear=-1;
        }
        else
            front = (front+1)%MAXSIZE;
    }
    display();
}

void display()
{
    if(rear == -1)
        printf("\ncircular queue empty");
    else
    {
        int i;
        printf("\nFollowing are the elements in circular queue:---> ");
        for(i=front; i!=rear; i=(i+1)%MAXSIZE)
            printf("%d ",c_queue[i]);
        printf("%d ",c_queue[i]);
    }
    printf("\n");
    printf("Enter y to continue:--->");
    while(getchar() != 'y'){};
}
