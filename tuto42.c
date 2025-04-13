#include<stdio.h>
int b=35;
int func1(int b1)
{
static int diomaond=6;
printf("The value of diomaond %d\n",diomaond);
diomaond++;
return b1+diomaond;
}
int main(){
int b=25;
int val=func1(b);
val=func1(b);
val=func1(b);
val=func1(b);
val=func1(b);
int *ptr =&val;
return 0;
}
