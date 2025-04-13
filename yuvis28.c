#include<stdio.h>
int fib_recursive(int n)
{

if (n==1 || n==2)
{
    return n-1;
}
else
{
    return fib_recursive(n-1)+fib_recursive(n-2);
}
int fib_itterative(int n)
{ 
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}
}
int main()
{
    int number;
printf("the fibbonachi series \n");
scanf("%d",&number);
printf("the fibonachi series of %d itterativ approch %d\n",number,fib_itterative(number));
printf("the fibonachi series of %d recursive approch %d\n",number,fib_recursive(number));
return 0;
}