#include <stdio.h>

void Display(int iNo)
{
       int iCnt = 0;

        //  1         2            3
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");  //4
    }
}

int main()
{
    int iValue=0;
    printf("Enter number of times you want to display hello on screen \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}