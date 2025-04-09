#include <stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize){
    int iCnt =0,iSum=0;
    float fAverage=0.0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
    }
    fAverage=((float)iSum/(float)iSize);
    return fAverage;
}
int main()
{
    int iCount=0,iCnt=0;
    int *ptr=NULL;
    float fRet=0.0f;

    printf("Enter number of element that you want to enter :\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount *sizeof(int));
printf("Dynamic memory gets alocated succesfully \n");

printf("Enter the element no \n");
for(iCnt=0;iCnt<iCount;iCnt++){
    printf("\nEnter the element %d",iCnt+1);
    scanf("%d",&ptr[iCnt]);
}
fRet=Average(ptr,iCount);
printf("%d",fRet);
// free(fRet);

    return 0;
}
