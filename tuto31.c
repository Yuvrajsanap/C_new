#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    temp =x;
    x =y;
    y =temp;
}
void main()
{
    int v=74 ,p =62;
    swap(v,p);
printf("\n value of v :%d",v);
printf("\nvalue if p:%d",p);
}