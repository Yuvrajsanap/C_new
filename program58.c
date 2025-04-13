#include <stdio.h>
#include<stdbool.h>

int CheckPalimdrome(int iNo){

    int iCopy=iNo;     //copy kela
    int iRev=0;
    int iDigit=0;

    while(iNo!=0){
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    } 
    return (iRev==iCopy);
    // if(iRev==iCopy){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet=CheckPalimdrome(iValue);
    if(bRet==true){
        printf("%d is a pallindrome\n",iValue);
    }else{
        printf("%d is a not pallindrome\n",iValue);
    }

    return 0;
}