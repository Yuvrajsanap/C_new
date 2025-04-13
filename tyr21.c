#include<stdio.h>
int factorial(int number)
{
    if (number ==1 || number ==0)
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
}
    int main()
    {
        int num;
        printf("enter youe age ");
        scanf("%d",&num);
        printf("enter your age %d is %d",num,factorial(num));
        return 0;

    }
