#include <stdio.h>
/*
print  multiplication table of a number entered by the user in pretty form
example:entertd the number you want to 
*/
int main ()
{
    /* code */
    int no;
    printf("Enter the number = ");
    scanf("%d",&no);
    for (int i = 1; i <=10; i++)
    {
        printf("\n%d*%d=%d",no,i,no*i);
    }
    


    return 0;
}