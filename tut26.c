#include<stdio.h>

int main()
{
    int a=80;
    int *ptra=&a;
    int *ptr2 = NULL;
    printf("the address of pointer to a is %p\n",&ptra);
    printf("the address of a is %p\n",&a);
    printf("the address of yuvraj  is %p\n",ptr2);
    printf("the value of a is %d\n,*ptra");
    printf("the value of a is %d\n",a);
    return 0;
}