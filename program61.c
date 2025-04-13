#include<stdio.h>
#include<stdlib.h>

//void Display(int Arr[],int iSze)  
void Display(int Arr[],int iSize){ //(100,4)
    int iCnt=0;

    printf("\nElements of the array are:\n");
    for(iCnt=0; iCnt<iSize;iCnt++){
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
    Display(ptr,iCount);  //Display(100,4)

    free(ptr);//free(100)
    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;
}