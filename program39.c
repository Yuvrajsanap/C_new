#include<stdio.h>
#include<stdbool.h>
   
 int  cheakPerfect(int iNo)
   {
    int iCnt=0;
    int sum=0;
//    1               2          3
    for(iCnt =1; iCnt<=(iNo/2); iCnt++){
        if((iNo % iCnt )==0){ //4
    sum =sum+ iCnt;
        }
    }
    if(iNo==sum){
        return true;
    }
    else{
        return false;
    }
}
 
int main()
{
    int ivalue =0;
    int bRet=0;


    printf("Enter the number \n");
    scanf("%d",&ivalue);
    
    bRet=cheakPerfect(ivalue);
    if(bRet==true){
        printf("%d is perfect number\n",ivalue);
    }
    else{
        printf("%d is not a perfect number\n",ivalue);
    }

    return 0;
}

