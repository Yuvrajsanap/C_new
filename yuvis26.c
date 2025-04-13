#include<stdio.h>
int main()
{
    printf("the pointer value \n");
    int a=20;
    int *ptra = &a;
    int *yuvi = NULL;
    printf("the address of a %p\n ",&ptra);
    printf("the value of a is %d\n",ptra);
    printf("the value of %p\n",yuvi);
    printf("the value of address a %d\n",a);
    return 0;
}