#include <stdio.h>
 #include<stdbool.h>

   
   void DisplayFactor(int iNo)
   {
    int iCnt=0;
    printf("Factors of %d are \n",iNo);

    for(iCnt =1; iCnt<iNo; iCnt++){
        if((iNo % iCnt )==0);
    }
    printf("%d",iCnt);
   }
 

int main()
{
    int ivalue =0;

    printf("Enter the number \n");
    scanf("%d",&ivalue);
    DisplayFactor(ivalue);

    return 0;
}