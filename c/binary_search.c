#include<stdio.h>
#include<stdlib.h>

int find_min(int*,int,int);
void selection_sort(int*,int);
int binary_search(int*,int,int,int);
int main()
{
    int limit,find_num,index;
    printf("How many numbers you want to enter:--->");
    scanf("%d",&limit);

    int *arr = (int*)malloc(limit*sizeof(int));
    printf("Enter the elements of the array:--->");
    for(int i=0; i<limit; i++)
        scanf("%d",&arr[i]);

    printf("Enter the number that you are searching for:--->");
    scanf("%d",&find_num);
    selection_sort(arr,limit);
    
    index = binary_search(arr,find_num,0,limit);
    if(index != -1)
        printf("Found the element\n");
    else
        printf("Didn't find the element\n");
    free(arr);
    return 0;
}

int binary_search(int *arr, int find_num, int l, int r) //using recursion
{
    int mid = (l+r)/2;

    if(arr[mid] == find_num)
        return(mid);
    if(l>r)
        return(-1);

    if(find_num > mid)
        return binary_search(arr,find_num,mid+1,r);
    else
        return binary_search(arr,find_num,l,mid-1);
}

void selection_sort(int *arr, int limit)
{
    int least_index;
    for(int i=0; i<limit; i++)
    {
        least_index = find_min(arr,i,limit);
        if(least_index >= 0)
        {
            arr[i] = arr[i] + arr[least_index];
            arr[least_index] = arr[i] - arr[least_index];
            arr[i] = arr[i] - arr[least_index];
        }
    }
}

int find_min(int *arr, int i, int limit)
{
    int min,loc,j;
    min = arr[i];
    loc = i;

    for(j=i+1; j<limit; j++)
    {
        if(min > arr[j])
        {
            min = arr[j];
            loc = j;
        }
    }
    if(loc == i)
        return(-1);
    else
        return(loc);
}