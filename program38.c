#include<stdio.h>
#include<stdbool.h>
   
 int  sumFactor(int iNo)
   {
    int iCnt=0;
    int sum=0;
//    1               2          3
    for(iCnt =1; iCnt<=(iNo/2); iCnt++){
        if((iNo % iCnt )==0){ //4
    sum =sum+ iCnt;
        }
    }

    return sum;
   }
 
int main()
{
    int ivalue =0;
    int iRet=0;


    printf("Enter the number \n");
    scanf("%d",&ivalue);
    
    iRet=sumFactor(ivalue);
    printf("sum is %d\n",iRet);
    sumFactor(ivalue);

    return 0;
}

//Time comlexity 0(N/2)