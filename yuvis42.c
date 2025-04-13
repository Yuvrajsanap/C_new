#include<stdio.h>
// int b=20;
int yuvi(int b)
{
    // static int snap=50;
    printf("the value is inside global variable %d\n",&b);
    // snap++;
    // printf("thr vaalue is %d\n",snap);
    return b+10;
}
int main()
{
    int b=36;
    printf("the value inside main is %d\n",&b);
    int val =yuvi(b);
    int *ptr=&b;
    printf("the value of a is %d\n",b);
    // printf("the value of val is %d\n",val);
    // printf("the address of  a is %d\n",&b);

}