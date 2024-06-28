#include<stdio.h>
#include<stdlib.h>

void merge_sort(int*,int,int);
void merge(int*,int,int,int);
int main()
{
    int n,*arr;
    printf("Enter the size of array:--->");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));         
    printf("Enter your numbers:-->");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);                     

    merge_sort(arr,0,n-1);
    printf("After sorting we get:-->");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    free(arr);
    return 0;
}

void merge_sort(int *arr, int low, int high)
{
    if(low>=high)   return;

    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void merge(int *arr, int low, int mid, int high)
{
    int *temp = (int*)malloc((high-low+1)*sizeof(int));
    int count=0,*p=&arr[low], *q=&arr[mid+1];           //here i did my first error 
//instead of arr[low] i only wrote and passed the address of arr

    while(p<=&arr[mid] && q<=&arr[high])
    {
        if(*p>=*q)
        {
            temp[count] = *q;
            q++;
            count++;
        }
        else
        {
            temp[count] = *p;
            p++;
            count++;
        }
    }
    while(p<=&arr[mid])
    {
        temp[count]=*p;
        p++;
        count++;
    }
    while(q<=&arr[high])
    {
        temp[count]=*q;
        q++;
        count++;
    }

    for(int i=low; i<=high; i++)
        arr[i] = temp[i-low];
    free(temp);
}

