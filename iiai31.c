// #include<stdio.h>
// void swap(int x, int y)
// {
//     int temp;
//     temp =x;
//     x=y;
//     y=temp;
// }
// void main()
// {
//     int r= 93, e=48 ;
//     swap (r,e);
//     printf("\nvalue of r :%d",r);
//     printf("\nvalue of e:%d",e);
// }

#include<stdio.h>
void swap (int *x ,int *y )
{
    int temp;
   temp =*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int e=37,p=63;
    swap(&e,&p);
    printf("\nvalue of e:%d",e);
    printf("\nvalue of p is :%d ",p);
}
