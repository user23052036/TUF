#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 30
char stack[MAXSIZE];
int top = -1;

void push(char);
void pop();
int a_to_z(char);
int priority(char);
int main()
{
    char str[30];

    printf("Enter your infix expression:--->");
    scanf("%s",str);

    printf("your postfix expression is:--->");
    for(int i=0; str[i] != '\0'; i++)
    {
        if(a_to_z(str[i]))
            printf("%c",str[i]);

        else if(str[i] == '(')
            push(str[i]);

        else if(str[i] == ')')
            while(stack[top] != '(')
                pop();

        else
        {
            while(priority(stack[top]) >= priority(str[i]))
                pop();
            push(str[i]);
        }
    }
    return 0;
}


int priority(char ch)
{
    if(ch == '(')
        return 0;
    else if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '^')
        return 3;
}

void push(char ch)
{
    stack[++top] = ch;
}

void pop()
{
    printf("%c",stack[top]);
    top--;
}

int a_to_z(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}