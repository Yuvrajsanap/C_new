#include <stdio.h>
#include <stdlib.h>


struct node{     
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int No){

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL){
        *Head=newn;
    }
    else{
        newn->next=*Head;
        (*Head)->prev=newn;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head,int No){
    PNODE temp=*Head;

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL){
        *Head=newn;
    }
    else
    {
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
}

void DeletFirst(PPNODE Head){
    if(*Head==NULL){
        return;
    }
    else if(((*Head)->next==NULL) && ((*Head)->prev==NULL)){
        free(*Head);
        *Head=NULL;
    }
    else{
       *Head=(*Head)->next;
       free((*Head)->prev);
       (*Head)->prev=NULL;

    }
}
void DeletLast(PPNODE Head){
    PNODE temp=*Head;

    if(*Head==NULL){
        return;
    }
    else if(((*Head)->next==NULL) && ((*Head)->prev==NULL)){
        free(*Head);
        *Head=NULL;

    }
    else{
        while(temp->next->next !=NULL){
           temp= temp->next;
        }
        free(temp->next);
        (temp->next)=NULL;
    }
}

void Display(PNODE Head){
    printf("Element of Linked list are:\n");

        printf("NULL");
    while(Head != NULL){
        printf("|%d|<=>",Head->data);
        Head=Head->next;
    }
        printf("NULL\n");
}

int Count(PNODE Head){
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
    int i;

    if((iPos<1 )  || (iPos>(Size+1))){
        return;
    }

    if(iPos==1){
        InsertFirst(Head,No);
    }
    else if(iPos==(Size+1)){
        InsertLast(Head,No);
    }else{
     newn=(PNODE)malloc(sizeof(NODE));

     newn->data=No;
     newn->next=NULL;
     newn->prev=NULL;

     for(i=1; i<iPos-1;i++){
        temp=temp->next;
     }   

     newn->next=temp->next;
     temp->next->prev=newn;
     temp->next=newn;
     newn->prev=temp;
    }
}

void DeletAtPos(PPNODE Head,int iPOs){
    int Size=Count(*Head);
    PNODE temp=*Head;
    int i=0;
    PNODE targatednode=NULL;

    if((iPOs<1) || (iPOs>(Size+1)))
    {
        return;
    }

    if(iPOs==1){
        DeletFirst(Head);
    }
    else if(iPOs==(Size+1))
    {
        DeletLast(Head);
    }
    else{

        for(i=1;i<iPOs-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
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
    printf("The number of node are:%d\n",Count(First));

    InsertLast(&First,101);
    InsertLast(&First,121);
    Display(First);
    iRet=Count(First);
    printf("number of node are: %d\n",iRet);

    DeletFirst(&First);
    Display(First);
    iRet=Count(First);
    printf("Number of nodes are: %d\n",iRet);

     DeletLast(&First);
    Display(First);
    iRet=Count(First);
    printf("Number of nodes are: %d\n",iRet);

    InsertAtPos(&First,50,2);
    Display(First);
    iRet=Count(First);
    printf("Number of nodes are:%d\n",iRet);

     DeletAtPos(&First,3);
    Display(First);
    iRet=Count(First);
    printf("Number of nodes are:%d\n",iRet);

    return 0;
}