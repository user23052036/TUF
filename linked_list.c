#include<stdio.h>
#include<stdlib.h>

void create();
void insert_from_first();
void insert_from_last();
void insert_from_middle();
void delete_from_first();
void delete_from_last();
void delete_from_middle();
void display();

typedef struct node node;         // instead of (struct node) data type we going to say just (node)
struct node                       // -> is used when the struct data type isa pointer                           
{                                 // (.) is used when struct data type is not a pointer
    int data;
    node *address;
} *start=NULL;

void main()
{
    int choice;
    do
    {
        printf("\n\n\n--------LINKED LIST----------\n");
        printf("1.CREATE\n");
        printf("2.INSERT FROM FIRST\n");
        printf("3.INSERT FROM LAST\n");
        printf("4.INSERT FROM MIDDLE\n");
        printf("5.DELETE FROM FIRST\n");
        printf("6.DELETE FROM LAST\n");
        printf("7.DELETE FROM MIDDLE\n");
        printf("8.DISPLAY\n");
        printf("9. EXIT\n");

        printf("Enter your choice:--->");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
                insert_from_first();
                break;
            case 3:
                insert_from_last();
                break;
            case 4:
                insert_from_middle();
                break;
            case 5:
                delete_from_first();
                break;
            case 6:
                delete_from_last();
                break;
            case 7:
                delete_from_middle();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
            default:
                printf("Enter a valid choice\n");
        }
    }while(choice != 9);
}

void create()
{
    printf("Enter an element:--->");
    start = (node*)malloc(sizeof(node));
    scanf("%d",&start->data);   
}