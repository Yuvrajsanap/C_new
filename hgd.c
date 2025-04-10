#include<stdio.h>
int main ()
{
    int num,sand=0;
    printf("enter a number\n");
scanf("%d",num);
do
{
    printf("%d\n",sand+2);
    sand=sand+2;
} while (sand <num);
return 0;
}