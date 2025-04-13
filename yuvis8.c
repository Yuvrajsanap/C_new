#include<stdio.h>
int main ()
{
    int no;
    printf("Enter the no = ");
    scanf("%d",&no);
for (int i = 0; i <= 10; i++)
{
      printf("\n%d*%d=%d",no,i,no*i);
}

return 0;
}
