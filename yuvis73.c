// #include<stdio.h>
// int sum(int a,int b)
// {
//     return a+b;
// }
// void rohit(int(*yuvi)(int,int))
// {
//     printf("good morning \n");
//     printf("the sum of 6 and 8: %d\n",yuvi(6,8));
// }
// void hitman(int(*yuvi)(int,int))
// {
//     printf("good evining \n");
//     printf("the sum of 4 and 8: %d\n",yuvi(4,8));
// }
// int main()
// {
//     int(*sk)(int,int);
//     sk = &sum;
//     hitman(sk);
//     return 0;
// }
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
void virat(int(*yuvi)(int,int))
{
    printf("hay\n");
    printf("the value is %d\n",yuvi(2,5));
}
void klrahul(int(*yuvi)(int,int))
{
    printf("hellow \n");
    printf("the value is %d\n",yuvi(6,4));
}
int main()
{
    int(*mahi)(int,int);
    mahi =&sum;
    klrahul(mahi);
    return 0;
}