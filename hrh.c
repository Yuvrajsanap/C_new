#include<stdio.h>
int main()
{
    printf("Hello world\n");
    int i,age;
    for (i=0; i<10 ;i++)
    {
        printf("%d\nEnter the age\n",i);
        scanf("%d",& age);
        if (age>10)
    {
        break;
    }
    return 0;
    }
}