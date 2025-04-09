#include<stdio.h>
void swap(int x, int y)
{
int temp;
temp = x;
x = y;
y = x;
return;
}
int main()
{
    int a=12,b=10;
    printf("the value %d is %d\n",a,b);
    swap(a,b);
    printf("the value %d is %d\n",a,b);
    return 0;
}
