#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,*ptr,flag;
    printf("Enter the size of array:--->");
    scanf("%d",&size);

    ptr = (int*)malloc(size*sizeof(int));
    printf("Enter the elemets of the array:--->");
    for(int i=0; i<size; i++)
        scanf("%d",&ptr[i]);
    
    for(int i=0; i<size; i++)
    {
        flag=0;
        for(int j=0; j<size-1-i; j++)
        {
            if(ptr[j] > ptr[j+1])
            {
                flag=1;
                ptr[j] = ptr[j] + ptr[j+1];
                ptr[j+1] = ptr[j] - ptr[j+1];
                ptr[j] = ptr[j] - ptr[j+1];
            }
        }
        if(flag==0)
            break;
    }

    printf("After sorting we get:-->");
    for(int i=0; i<size; i++)
        printf("%d ",ptr[i]);
        
    free(ptr);
    return 0;
}