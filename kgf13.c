#include <stdio.h>
int main()
{
    int num,index =0;
    printf("enter the number\n");
    scanf("%d",&num);
    do
    {
     printf("%d\n",index+25);
        index= index+25;
    } while (index<num);
    return 0;

}