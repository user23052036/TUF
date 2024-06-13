#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int*,int);
int main()
{
    int limit;
    printf("Enter how many elemenets you want to enter:--->");
    scanf("%d",&limit);

    int *arr = (int*)malloc(limit*sizeof(int));
    printf("Enter the elements of the array:--->");
    for(int i=0; i<limit; i++)
        scanf("%d",&arr[i]);

    insertion_sort(arr,limit);

    printf("\nElements after shorting:--->");
    for(int i=0; i<limit; i++)
        printf("%d\t",arr[i]);
    free(arr);
    return 0;
}

void insertion_sort(int *arr,int limit)
{
    int temp,i;
    for(int round=1; round<=limit; round++)
    {
        temp = arr[round];
        for(i=round-1; i>=0 && arr[i]>temp; i--)
            arr[i+1] = arr[i];
        arr[i+1] = temp;
    }
}