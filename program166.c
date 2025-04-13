#include <stdio.h>
#include<stdlib.h>

//Structrure Declaration
struct node{
    int data;
    struct node *next;//self refrantial structrure.
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No){
    // step1: Allocate memory for node 
 PNODE newn = NULL;
 newn =(PNODE)malloc(sizeof(NODE));

    // step2: Initialize the node 
 newn->data=No;
 newn->next=NULL;

//  step 3: cheak wheter LL is empty or not 
if(*Head==NULL){
    *Head =newn;
}
else{    //LL contains atleast 1 node in it
    newn->next=*Head;
    *Head=newn;
}
}

void  Display(PNODE Head){
printf("Element of linked list are : \n");

while(Head!= NULL){
    printf("|%d |->",Head->data);
    Head=Head->next;
}
printf("NULL \n");
}

int Count(PNODE Head){
    int iCnt=0;
    while(Head !=NULL){
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}
int main()
{
    PNODE First=NULL;

    InsertFirst(&First,51);//InsertFirst(60,51);
    InsertFirst(&First,21);//InsertFirst(60,51);
    InsertFirst(&First,11);//InsertFirst(60,51);

    Display(First);

    // Count(First);
    printf("the no of count is %d",Count(First));
    
    return 0;
}