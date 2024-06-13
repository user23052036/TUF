#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int stack[MAXSIZE], top = -1;

void push();
void pop();
void display();
void exit_func();

void push()
{
    int num;
    if(top == MAXSIZE-1)
        printf("stack overflow\n");
    else
    {
        printf("Enter element to push:--->");
        scanf("%d",&num);
        stack[++top] = num;
    }
}

void pop()
{
    if(top == -1)
        printf("Empty stack\n");
    else
    {
        printf("%d element is popped in %d position",stack[top],top+1);
        top--;
    }
}

void display()
{
    if(top == -1)
        printf("Empty stack\n");
    else
    {
        printf("Following are the elements in stack:--->");
        for(int i=top; i>-1; i--)
            printf("%d\t",stack[i]);
        printf("\n");
    }
}

void exit_func()
{
    exit(0);
}

void main()
{
    int choice;
    do
    {
        printf("\n\n-------------stack-------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("--------------------------------\n");

        printf("Enter your choice:--->");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit_func();
        }
    }while(choice != 4);
}