#include<stdio.h>
#include<stdlib.h>

typedef struct              //typedef statement start
{
    int data;
    node *address;
} node;                  // typedef statement end we cannot create variable inside typedef statement
node *start=NULL;        //created global structure variable