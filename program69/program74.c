#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo){
    int iCnt =0;
    int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
       if(Arr[iCnt]==iNo){
        iFrequency++;
       }
    }
    return iFrequency;
}
int main()
{
    int iCount=0,iCnt=0,iRet=0,iValue=0;
    int *ptr=NULL;

    printf("Enter number of element that you want to enter :\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount *sizeof(int));
printf("Dynamic memory gets alocated succesfully \n");

printf("Enter the element no \n");
for(iCnt=0;iCnt<iCount;iCnt++){
    printf("\nEnter the element : %d ",iCnt+1);
    scanf("%d",&ptr[iCnt]);
}
printf("Enter the element you want to serch\n");
scanf("%d",&iValue);

iRet=Frequency(ptr,iCount,iValue);
printf("%d occurs %d times\n",iValue,iRet);

free(ptr);
printf("Dynamic memort get deallocated succesfully...\n");
    return 0;
}
