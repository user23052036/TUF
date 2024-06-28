#include<stdio.h>
#include<stdlib.h>

void quick_sort(int*,int,int);
void switch_num(int*,int*);
int correct_pos(int*,int,int,int);
int main()
{
    int n,*arr;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));         
    printf("Enter your numbers:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);                     

    quick_sort(arr,0,n-1);
    printf("After sorting we get:-->");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    free(arr);
    return 0;
}

void quick_sort(int *arr, int low, int high)
{
    if(low>=high) return;
    int choice = arr[low],r8_inx;

    r8_inx = correct_pos(arr,choice,low,high);
    quick_sort(arr,low,r8_inx-1);
    quick_sort(arr,r8_inx+1,high);
}

int correct_pos(int *arr, int choice, int low, int high)
{
    int i=low,j=high;
    while(i<j)
    {
        while(arr[i]<=choice && i<high)
            i++;
        while(arr[j]>choice && j>low)
            j--;
        if(i<j)
            switch_num(&arr[i],&arr[j]);
    }
    switch_num(&arr[low],&arr[j]);
    return(j);
}

void switch_num(int *p, int *q) // i dont know why but this function is wrong
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}

