#include <stdio.h>
#include <stdlib.h>


typedef int data_t;

typedef struct node
{
    data_t data;
    struct node *link;
}SList;


int InsertLast(SList **Head, int Data)
{
    // Create a new node

    // printf("%p",**Head);
    
    SList *new = malloc(sizeof(SList));

    if(new == NULL)
    {
        return -1;
    }

    //Update data and link

    new->data = Data;
    new->link = NULL;

    //Check list is empty or not

    if(*Head == NULL)
    {
        *Head = new; 
        return 0;  
    }

    //If not empty

    SList *Temp = *Head;

    while(Temp->link != NULL)
    {
        Temp = Temp->link;
    }

    Temp->link = new;

    return 0;

}


int InsertAfter(SList **Head, data_t check, data_t Data)
{
    //New node

    SList *new = malloc(sizeof(SList));

    if(new == NULL)
        return -1;
    
    new->data = Data;
    new->link = NULL;

    //Empty Check

    if(*Head == NULL)
    {
        *Head = new;
        return 0;
    }

    //Find the data in node

    SList *Temp = *Head;

    while(Temp)
    {
        if(Temp->data == check)
        {
            new->link = Temp->link;
            Temp->link = new;
        }

        Temp = Temp->link;
    }

}




void printList(SList *Head)
{

    printf("Printing list\n");
    while(Head)
    {
        printf("%d\n", Head->data);
        Head = Head->link;
    }
}

int main()
{

    SList *Head = NULL;


    printf("%d \n ",InsertLast(&Head,10));
    printf("%d \n ",InsertLast(&Head,20));
    InsertLast(Head,30);
    printList(Head);
    // InsertAfter(&Head,30,25);
    // InsertAfter(&Head,25,26);
    // printList(Head);

}