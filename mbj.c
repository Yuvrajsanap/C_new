#include <stdio.h>
int main()
{
int num,spayro=0;
printf("enter a number\n");
scanf("%d" ,&num);
do
{
    printf("%d\n",spayro+25);
    spayro =spayro+25;
} while (spayro<num);
return 0;
}