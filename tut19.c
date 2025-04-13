// #include<stdio.h>
// int sum(int a,int b);
// void printstar(int n)
// {
// for (int i = 0; i < n; i++)
// {
// printf("%c",'*');
// }
// int a, b, c;
 
//         a=6;
//     b=8;
//     c=sum(a,b);
//     printf("the sum is %d\n",c);
//     return 0;
// }

#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a, b, c;
    a=19;
    b=20;
    c=sum(a, b);
printf("the sum is %d\n",c);
return 0;
}