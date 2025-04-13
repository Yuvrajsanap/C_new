#include<stdio.h>
#include<stdlib.h>          //Single Linear linked list

struct node {

    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int No){

    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head == NULL){
        *Head=newn;
    }
    else{
       newn->next=*Head;
       *Head=newn;
    }
}

void InsertLast(PPNODE Head,int No)
{
    //Temoporary pointer for LL travelsal
    PNODE Temp=*Head;

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head == NULL) //LL is empty
    {
        *Head=newn;
    }
    else    //Travel the LL till last node
    {  
        while(Temp->next != NULL)
        Temp=Temp->next;    
        Temp->next=newn;  //Address of new node;
    }
}

void DeleteFirst(PPNODE Head){

        PNODE Temp=*Head;

    if(*Head == NULL){  //case 1
        return;
    }
    else if((*Head)->next==NULL)  //case 2
    {
        free(*Head);
        *Head=NULL;
    }
    else{                //case 3
        *Head=(*Head)->next;
        free(Temp);
    }
}
void DeleteLast(PPNODE Head){

    PNODE Temp = *Head;

    if(*Head == NULL){     //case 1
        return;
    }
    else if((*Head)->next == NULL){   //case 2
        free(*Head);
        *Head=NULL;
    }
    else{                   //case 3
        while((Temp)->next->next != NULL)
        {
            Temp=Temp->next;
        }
        free(Temp->next);
        (Temp->next)=NULL;
    }
}


void Display(PNODE Head){
    printf("Element of the Linked List are:\n");

    while(Head != NULL){
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount=0;

    while(Head != NULL){
        iCount++;
        Head=Head->next;
    }
    return iCount;
}

void InsertAtPos(PPNODE Head,int No,int iPos){

    int Size=Count(*Head);
    PNODE temp=*Head;
    PNODE newn=NULL;
    int i=0;

    // case 1 : Invalid position
    if(iPos<1 || iPos>Size){
        printf("Invoid position");
        return;
    }

     // case 2 : First position
    if(iPos==1){
        InsertFirst(Head,No);
    }
     // case 3 : Last position
    else if(iPos==Size){
        InsertLast(Head,No);
    }
    // case 4 : position is in between first and Last
    else{
        for(i=1;i<iPos-1;i++){
            temp=temp->next;
        }
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;

        newn->next=temp->next;
        temp->next=newn;

    }
}

void DeleteAtPos(PPNODE Head,int iPos){

    int Size=Count(*Head);
    PNODE temp=*Head;
    PNODE targatednode=NULL;
    int i=0;
    
     // case 1 : Invalid position   Ex:11/-2/8
    if(iPos<1 || iPos>Size){
        printf("Invalid position");
        return;
    }

     // case 1 : First position    Ex;1
    if(iPos==1){
        DeleteFirst(Head);
    }
    // case 1 : Last position    Ex:6
    else if(iPos==Size){
        DeleteLast(Head);
    }
    // case 4 : position is in between first and Last
    else{
        for(i=1;i<iPos-1;i++){
            temp=temp->next;
        }

        targatednode=temp->next;

        temp->next=temp->next->next;
        free(targatednode);
    }
}
int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    printf("The no of Count are: %d\n ",Count(First));


    InsertLast(&First,101);
    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet=Count(First);
    printf("The no of node are: %d\n ",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet=Count(First);
    printf("NUmber of nodes are: %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet=Count(First);
    printf("nuber of Nodes are: %d\n",iRet);

    InsertAtPos(&First,80,3);
    Display(First);
    iRet=Count(First);
    printf("number of nodes are:%d\n",iRet);

    DeleteAtPos(&First,2);
    Display(First);
    iRet=Count(First);
    printf("The number of node is %d\n",iRet);
    
    return 0;
}