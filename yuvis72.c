// #include<stdio.h>
// int sum(int a, int b)
// {
//     return a+b;
// }
// int main(){
// int(*yuvi)(int,int);
// yuvi = &sum;
// int c=(*yuvi)(5,8);
// printf("the value of c is %d\n",c);
// return 0;
// }
#include<stdio.h>
int lusifar(int a,int b)
{
    return a*b;
}
int main()
{
    int(*yuvi)(int,int);
    yuvi = &lusifar;
    int h=(*yuvi)(5,2);
printf("the value of h is %d\n",h);
return 0;
}