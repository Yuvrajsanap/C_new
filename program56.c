#include <stdio.h>

int SumDigit(int iNo){
    int iSum=0;
// int iCnt=0;
// int iDigit=0;
  

 while(iNo != 0){
        // iDigit=iNo%10;
        iSum=iSum+(iNo%10);
        iNo=iNo/10;
 }
   return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet=SumDigit(iValue);

    printf("Number of digti : %d\n",iRet);

    return 0;
}