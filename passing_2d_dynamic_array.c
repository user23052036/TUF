//error: double free or corruption(out)


#include <stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 4

void display(int**);
int main() 
{
    int **arr = (int**)malloc(ROW*sizeof(int*));
    for(int i=0; i<COL; i++)
        arr[i] = (int*)malloc(COL*sizeof(int));
    
    display(arr);
    
    for(int i=0; i<COL; i++)
        free(arr[i]);
    free(&arr[0][0]);
    return 0;
}

void display(int **arr)
{
    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
            printf("%d ",arr[i][j]);
        printf("\n\n");
    }
}
