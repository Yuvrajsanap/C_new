#include<stdio.h>
int main ()
{
    int marks;
    printf("Your marks\n");
    scanf("%d",& marks);
    // printf("Your all marks %d\n",marks);
    if (marks>=70)
    {
        printf("marks of kom");
    }
    else if (marks>=62)
    {
        printf("marks of math");
    }
    
    else
    {
     printf("you have pass in all subject");   
    }
    
    return 0;
}