#include<stdio.h>
void changevalue(int* address)
{
    *address=46483;
}
int main()
{
    int a=38 ,b=56;
    printf("the value of a now is %d\n",a);
    changevalue(&a);
    printf("the value of a is now %d\n",a);
    return 0;
}
