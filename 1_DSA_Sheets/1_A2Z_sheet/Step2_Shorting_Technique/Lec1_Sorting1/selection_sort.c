#include<stdio.h>
#include<stdlib.h>

void swap(int*,int,int);
int min(int*,int,int);
void bubble_sort(int*,int);
int main()
{
    int n,*ptr,loc;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));         //dynamic memory allocation using calloc function
    printf("Enter your numbers:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&ptr[i]); 
    
    for(int round=0; round<n-1; round++)
    {
        loc = min(ptr,round,n);
        swap(ptr,round,loc);
    }

    free(ptr);
    return 0;  
}


void swap(int *arr, int start, int end)
{
    arr[start] = arr[start] + arr[end];
    arr[end] = arr[start] - arr[end];
    arr[start] = arr[start] - arr[end];
}


int min(int *arr, int start, int end)
{
    int loc,min = arr[0];
    for(int i= start; i<=end; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            loc = i;
        }
        return(loc);
    }
}

