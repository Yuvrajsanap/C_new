#include<stdio.h>
#include<stdlib.h>
 
void EvenDisplay(int Arr[],int iSize){ 
    int iCnt=0;

    printf("\nElements of the array are:\n");
    for(iCnt=0; iCnt<iSize;iCnt++){
        if((Arr[iCnt]%2)==0){
            printf(" the even number is %d",iCnt);
        }
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}
int main(){

    int iCount=0, iCnt=0;
    int *ptr=NULL;

    printf("Enter the number of element that yoy want to enter :\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets alocated suceesfully for %d elements \n",iCount);

    printf("Enter the %d value: \n",iCount);
    for(iCnt=0; iCnt<iCount;iCnt++){
        printf("\n Enter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    EvenDisplay(ptr,iCount);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;
}