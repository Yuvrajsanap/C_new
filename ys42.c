#include<stdio.h>
// int yuvi()
// {
// static int i=0;
// i++;

// return i;
// }
// int main()
// {
//     int a;
//     printf("the avlue is %d\n",yuvi());
//     printf("the avlue is %d\n",yuvi());
//     printf("the avlue is %d\n",yuvi());
//     return 0;
// }
int hitman()
{
   static int i=10;
   i++;
    return i;
}

int main()
{
    int a;
    printf("the value is %d\n",hitman());
    printf("the value is %d\n",hitman());
    printf("the value is %d\n",hitman());
    printf("the value is %d\n",hitman());
}