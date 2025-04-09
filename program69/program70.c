#include <stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize){
    int iCnt =0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]>iMax){
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iCount=0,iCnt=0,iRet=0;
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
iRet=Maximum(ptr,iCount);
printf("%d",iRet);
printf("maximum element is : %d\n",iRet);

free(ptr);

    return 0;
}
