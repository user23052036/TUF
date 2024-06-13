// doubt not able to understand the different ways of passing 2d array into a function
// and how it is different fro passing 2d dynamic array into a function

#include<stdio.h>
#define ROW 3
#define COL 4


void rough1(int**,int,int);
void rough2(int[][COL],int,int);
int main()
{
    int arr[ROW][COL] = {{1,2,3,4},
                         {5,6,7,8},
                         {9,7,3,4}};
                
                    
    
    printf("arr            %u\n",arr);
    printf("&arr+1         %u\n",&arr+1);
    printf("arr+1          %u\n",arr+1);
    printf("arr[0]+1       %u\n",arr[0]+1);
    printf("&arr[0][0]+1   %u\n\n\n",&arr[0][0]+1);
    
    int **p = &arr;
    rough1(p,ROW,COL);
    return 0;
}


void rough1(int **arr, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }  
}


void rough2(int arr[][COL], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }  
}