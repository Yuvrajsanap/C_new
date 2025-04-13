#include<stdio.h>
struct sports
{
    char name[43];
    char aim[54];
    char favrate [67];
    char highscore[65];
};
int main ()
{
    struct sports s1,s2;
    printf("Enter the name of the sport");
    printf("The name of sports 1 is \n");
    scanf("%s",s1.name);
    printf("The name of sports 2 is \n");
    scanf("%s",s1.name);
return 0;
}