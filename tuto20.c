#include <stdio.h>
int main()  
{ 
int num;
printf("Enter the number you want multiplication table of:\n");
scanf("%d",& num);
printf("Multiplicaton table of%d is as follows:\n");
printf("%d x 1=%d\n",num,num*1);
printf("%d x 2=%d\n",num,num*2);
printf("%d x 3=%d\n",num,num*3);
printf("%d x 4=%d\n",num,num*4);
printf("%d x 5=%d\n",num,num*5);
return 0;
}