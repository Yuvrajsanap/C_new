#include <stdio.h>
int main()
{
    int a=75;
    float b=34;
    int c=6343;
    void *ptr;
    ptr = &a;
    printf("the value of a is %d\n",*((int*)ptr));
    ptr =&b;
    printf("the value of b is %f\n",*((float*)ptr));
    ptr =&c;
    printf("the value of c is %d\n",*((char*)ptr));
    return 0;
}