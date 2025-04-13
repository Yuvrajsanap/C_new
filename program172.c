#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE ,*PNODE,**PPNODE;

// typedef struct node NODE;
// typedef struct  node* PNODE;
// typedef struct NODE** PPNODE ;

void InsertFirst(PPNODE Head,PPNODE Tail,int no){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL) && (*Tail == NULL) )  //LL is empty
    {
        *Head =newn;
        *Tail=newn;
    }else{                                 //LL is 1 node
    newn->next=*Head;
    *Head=newn;
    }
    (*Tail)->next=*Head;

}

void InsertLast(PPNODE Head,PPNODE Tail,int no){
      PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL) && (*Tail == NULL) )  //LL is empty
    {
        *Head =newn;
        *Tail=newn;
        (*Tail)->next=*Head;
    }else{                                 //LL is 1 node
        (*Tail)->next=newn;
        *Tail=newn;
        (*Tail)->next=*Head;
    }

}


void DeleteFirst(PPNODE Head,PPNODE Tail){

    if((*Head==NULL) && (*Tail==NULL)){    //case 1
        return;
    }
    else if(*Head==*Tail){           //case 2

        free(*Head);           //free then null head and tail
        *Head=NULL;
        *Tail=NULL;
    }
    else{
         *Head=(*Head)->next;
        free((*Tail)->next);

    }
        (*Tail)->next=*Head;
}
void DeleteLast(PPNODE Head,PPNODE Tail){

    PNODE temp=*Head;
      if((*Head==NULL) && (*Tail==NULL)){    //case 1
        return;
    }
    else if(*Head==*Tail){           //case 2

        free(*Head);           //free then null head and tail
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
void Dispay(PNODE Head,PNODE Tail){

    printf("Element of the linlked list are:\n");

    if((Head!=NULL) && (Tail!=NULL)){
        do{
            printf("| %d | -> ",Head->data);
            Head =Head ->next;
        }while(Head!=Tail->next);
    }
    printf("Adress of first node\n");
}
int Count(PNODE Head,PNODE Tail){
    int iCnt=0;

    if((Head!=NULL) && (Tail!=NULL)){
        do{
            iCnt++;
            Head =Head ->next;
        }while(Head!=Tail->next);
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int ipos){
    int size=0,i=0;
    size=Count(*Head,*Tail);
    PNODE newn=NULL;

    PNODE temp=*Head;

    if((ipos<1) || (ipos> size+1)){
        printf("Invalid position\n");
        return;
    }

    if(ipos==1){
        InsertFirst(Head,Tail,no);
    }
    else if(ipos==size+1){
        InsertLast(Head,Tail,no);
    }
    else{
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no; 
        newn->next=NULL;

        for(i=1; i<ipos-1;i++){
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos){
   int size=0,i=0;
    size=Count(*Head,*Tail);
    PNODE newn=NULL;
    PNODE targetednode=NULL;


    PNODE temp=*Head;

    if((ipos<1) || (ipos> size)){
        printf("Invalid position\n");
        return;
    }

    if(ipos==1){
        DeleteFirst(Head,Tail);
    }
    else if(ipos==size+1){
        DeleteLast(Head,Tail);
    }
    else{
    

        for(i=1; i<ipos-1;i++){
            temp=temp->next;
        }
        targetednode=temp->next;
        temp->next=temp->next->next;
        free(targetednode);
        
    }
}

int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;        //#
    int iRet=0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Dispay(First,Last);
    iRet=Count(First,Last);
    printf("Number of the element are %d\n",iRet);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,121);
    InsertLast(&First,&Last,151);
     Dispay(First,Last);
    iRet=Count(First,Last);
    printf("Number of the element are %d\n",iRet);
    
    DeleteFirst(&First,&Last);
    Dispay(First,Last);
    iRet=Count(First,Last);
    printf("Number of the element are %d\n",iRet);

    DeleteLast(&First,&Last);
    Dispay(First,Last);
    iRet=Count(First,Last);
    printf("Number of the element are %d\n",iRet);

    InsertAtPos(&First,&Last,105,4);
     Dispay(First,Last);
    iRet=Count(First,Last);
    printf("Number of the element are %d\n",iRet);

    DeleteAtPos(&First,&Last,3);
     Dispay(First,Last);
    iRet=Count(First,Last);
    printf("Number of the element are %d\n",iRet);
    

    
    return 0;
}