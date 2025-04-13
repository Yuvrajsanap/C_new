#include <stdio.h>
// call by refrance //
// void changevalue(int *address)
// {
//     *address = 380;
// }
// int main()
// {
//     int a = 4, b = 6;
//     printf(" the super heat movie in world %d\n", a);
//     changevalue(&a);
//     printf("the heat movie is %d\n", a);
//     return 0;
// }
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x =*y;
    *y = temp;
    return ;
}
int main()
{
    int a=4,b=6;
    printf("the value %d is %d\n",a,b);
    swap(&a,&b);
    printf("the value %d is infinite %d\n",a,b);
return 0;
}