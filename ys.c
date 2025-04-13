#include<stdio.h>
int main()
{
    int bike;
    printf("My bike name is \n");
    scanf("%d", & bike);
    // printf("all is my favorite bike%d\n");
    if (bike >= 200)
    {
        printf("My bike is Royal infield ");
    }
    else if(bike>=150)
    {
        printf("your bike is R15");
    }
    else
    {
        printf("My bike is bugati");
    }
    return 0;
}