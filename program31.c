#include<stdio.h>

void Display(int iNo){
    int iCnt=0;
    // int iNo=8;
    //     1        2       3
    for(iCnt=1; iCnt<=iNo; iCnt++){
        printf("Jay Ganesh...\n");  //4
    }
}

int main(){
    int iValue=0;

    printf("Enter number of times you want to display jay ganesh on screen\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}