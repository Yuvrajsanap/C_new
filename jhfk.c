#include<stdio.h>
int main()
{
int num,datu=0;
printf("enter a number\n");
scanf("%d",&num);
do
{
    printf("%d\n",datu+25);
    datu=datu+25;
} while (datu<num);
return 0;
}