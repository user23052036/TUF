#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int*,int);
int main()
{
    int n,*ptr;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));         //dynamic memory allocation using calloc function
    printf("Enter your numbers:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&ptr[i]);                     //storing user input in dynamic memory

    bubble_sort(ptr,n);
    printf("After sorting we get:-->");
    for(int i=0; i<n; i++)
        printf("%d ",ptr[i]);
    free(ptr);
    return 0;
}


void bubble_sort(int *ptr, int n)              // bubble sort
{
    for(int round=1; round<n; round++)
        for(int i=0; i<n-round; i++)
        {
            if(ptr[i] > ptr[i+1])
            {
                ptr[i] = ptr[i] + ptr[i+1];
                ptr[i+1] = ptr[i] - ptr[i+1];
                ptr[i] = ptr[i] - ptr[i+1];
            }
        }
}