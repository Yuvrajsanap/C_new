#include<stdio.h>
int main(){
   int ys[5],sum=0;
   printf("Enter the marks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("the marks is %d  ",i+1);
        scanf("%d",&ys[i]);
        sum+=ys[i];
    }
    int average=sum/5;
    printf("the average is %d ",average);
    return 0;
}