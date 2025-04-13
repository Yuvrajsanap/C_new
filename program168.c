#include <stdio.h>
#include<stdlib.h>

struct node{              //Single LL
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No){

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head=NULL){
        *Head=newn;
    }
    else{
        newn->next=*Head;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head,int No){
    //Temoporary pointer for LL travelsal
    PNODE Temp=*Head;

     PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head==NULL){  //LL is empty
        *Head=newn;
    }
    else{
        //Travel the LL till last node
        while(Temp->next != NULL){
            Temp=Temp->next;
        }
        //Add the address of new node at the end of last node
        Temp->next=newn;
    }
}
void Display(PNODE Head){

    printf("contents of linked list \n");

    while(Head != NULL){
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("null \n");
}

int Count(PNODE Head){

    int iCnt=0;

    while(Head != NULL){
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}

void DeletFirst(PPNODE Head){
    
    if(*Head==NULL){ //case 1
        return;
    }
    else if((*Head)->next==NULL){  //case 2
    free(*Head);
    *Head=NULL;
    }
    else{  //case 3
    PNODE Temp=*Head;
    *Head=(*Head)->next;
    free(Temp);
    }
}

void DeletLast(PPNODE Head){
    PNODE Temp = *Head;
if(*Head==NULL){ //case 1
        return;
    }
    else if((*Head)->next==NULL){  //case 2
    free(*Head);
    *Head=NULL;
    }
    else{  //case 3
    while(Temp->next->next !=NULL){
        Temp=Temp->next;
    }
    free(Temp->next);
    Temp->next=NULL;
    }
}
void InsertAtPos(PPNODE Head,int No,int iPos){

    int Size= Count(*Head);
    PNODE newn=NULL;
    int i=0;
    PNODE temp=*Head;
    // case 1 : Invalid position
    if((iPos<1) || (iPos>Size+1)){
        printf("Invalid position \n");
        return;
    }
    // case 2 : First position
    if(iPos==1){
        InsertFirst(Head,No);

    }
    // case 3 : Last position
    else if(iPos==Size+1){
        InsertLast(Head,No);
    }
    // case 4 : position is in between first and Last
    else{
         for(i=1;i<iPos-1;i++){
         temp =temp->next;
         } 
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=No;
        newn->next=NULL;

    newn->next=temp->next;
    temp->next=newn;
}
}

void DeleteAtPos(PPNODE Head,int iPos){

    int Size= Count(*Head);
    PNODE temp=*Head;
    PNODE targatednode=NULL;
    int i=0;
    // case 1 : Invalid position   Ex:11/-2/8
    if((iPos<1) || (iPos>Size)){
        printf("Invalid position \n");
        return;
    }
    // case 2 : First position    Ex;1
    if(iPos==1){
        DeletFirst(Head);
    }
    // case 3 : Last position    Ex:6
    else if(iPos==Size){
        DeletLast(Head);
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

    DeletFirst(&First);
    Display(First);
    iRet=Count(First);
    printf("NUmber of nodes are: %d\n",iRet);

    DeletLast(&First);
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