#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//InsertFirst
void Push(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL){
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

// deleteFirst-return vlaue int
int Pop(PPNODE Head)
{   
    int value=0;
      PNODE temp=*Head;

    if(*Head==NULL){
        printf("STACK IS EMPTY");
    }
    else
    {   
        value=(*Head)->data;
       *Head=(*Head)->next;
       free(temp);
    }
    return value;
}
void Display(PNODE Head)
{
    printf("Element of the stack are:\n");
    while(Head!=NULL){
        printf("|%d|\n",Head->data);
        Head=Head->next;
    }
}
int main()
{
    PNODE First=NULL;
    Push(&First,101);  
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);

    Display(First);

    Pop(&First);
    Pop(&First);
    Pop(&First);
    Display(First);

    return 0;
}