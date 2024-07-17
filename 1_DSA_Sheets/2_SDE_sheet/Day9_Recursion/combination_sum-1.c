#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
int stack[MAXSIZE];
int top=-1;

void push(int);
void pop();
void display();
void combination(int,int*,int,int);
int main()
{
    int n,*arr,target;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));         
    printf("Enter the elements:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);   

    printf("ENter the target element:--->");
    scanf("%d",&target);

    printf("Following are the combination possible:--->");
    combination(0,arr,target,n-1);                  
    free(arr);
    return 0;
}

void combination(int index, int *arr, int target, int n)
{
    if(index>n)
    {
        if(target==0)
        {
            printf("{");
            display();
            printf("}");
        }
        return;
    }
    push(arr[index]);
    if(target>=arr[index])
        combination(index,arr,target-arr[index],n);
    pop();
    combination(index+1,arr,target,n);
}



void push(int num)
{
    stack[++top]=num;
}

void pop()
{
    top--;
}

void display()
{
    for(int i=0; i<=top; i++)
        printf("%d",stack[i]);
}