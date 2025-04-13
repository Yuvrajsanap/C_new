#include <stdio.h>
#include<stdlib.h>

struct node{    //single circular LL
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct  node* PNODE;
typedef struct node** PPNODE ;

void InsertFirst(PPNODE Head,PPNODE Tail,int no){

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL) && (*Tail==NULL)){
        *Head=newn;
        *Tail=newn;
    }
    else{
        newn->next=*Head;
        *Head=newn;
    }
    (*Tail)->next=*Head;
}

void InsertLast(PPNODE Head,PPNODE Tail,int no){

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL) && (*Tail==NULL)){
        *Head=newn;
        *Tail=newn;
    }
    else{
        (*Tail)->next=newn;
        *Tail=newn;
    }
    (*Tail)->next=*Head;
}

void Display(PNODE Head,PNODE Tail){

    printf("Element of the linked List are:\n");

   if((Head !=NULL) && (Tail !=NULL)){
    do{
       printf("|%d|->",Head->data);
        Head=Head->next;
    }while(Head !=Tail->next);
   }
   printf("Addres of first node \n");
}

int count(PNODE Head,PNODE Tail){
    int iCount=0;
    if((Head !=NULL) && (Tail!=NULL)){
        do{
           iCount++;
           Head=Head->next;
        }while(Head!=Tail->next);
    }
        return iCount;
}

void DeleteFirst(PPNODE Head,PPNODE Tail){

    if((*Head==NULL) && (*Tail==NULL)){
        return;
    }
    else if(*Head==*Tail){
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else{
      *Head= (*Head)->next;
      free((*Tail)->next);
      (*Tail)->next=*Head;
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail){
    PNODE temp=*Head;
    if((*Head==NULL) && (*Tail==NULL)){
        return;
    }
    else if(*Head==*Tail){
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else{
        while(temp->next!=*Tail){
           temp=temp->next;
        }
        free(*Tail);
        *Tail=temp;
        (*Tail)->next=*Head;
    }
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int iPos){
    int Size=count(*Head,*Tail);
    PNODE temp=*Head;
    PNODE newn=NULL;
    int i=0;

    if((iPos<1) || (iPos>Size)){
        printf("Invalid position\n");
        return ;
    }
    if(iPos==1){
        InsertFirst(Head,Tail,no);
    }
    else if(iPos==Size+1){
        InsertLast(Head,Tail,no);
    }
    else{
        newn=(PNODE)malloc(sizeof(PNODE));
        newn->data=no;
        newn->next=NULL;

       for(i=1;i<iPos-1;i++){
        temp=temp->next;
       }
       newn->next=temp->next;
       temp->next=newn;
    }
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos){
    int Size=count(*Head,*Tail);
    PNODE temp=*Head;
    int i=0;
     PNODE targatednode=0;

    if((iPos<1) && (iPos>Size+1)){
        printf("Invalid position");
        return;
    }

    if(iPos==1){
        DeleteFirst(Head,Tail);
    }
    else if(iPos==(Size+1)){
        DeleteLast(Head,Tail);
    }
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
    PNODE Last=NULL;
    int iRet=0;
    
    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);
    Display(First,Last);
    printf("Number of node are:%d\n",count(First,Last));


    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,121);
    InsertLast(&First,&Last,151);
     Display(First,Last);
    iRet=count(First,Last);
    printf("Number of the element are %d\n",iRet);
    
    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet=count(First,Last);
    printf("Number of the element are %d\n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet=count(First,Last);
    printf("Number of the element are %d\n",iRet);

    InsertAtPos(&First,&Last,105,4);
     Display(First,Last);
    iRet=count(First,Last);
    printf("Number of the element are %d\n",iRet);

    DeleteAtPos(&First,&Last,3);
     Display(First,Last);
    iRet=count(First,Last);
    printf("Number of the element are %d\n",iRet);
    

    return 0;
}