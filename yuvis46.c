#include<stdio.h>
struct driver 
{
    char name[53];
    char route[64];
    char no[52];
    int kms;
};
int main()
{
    struct driver d1,d2,d3;
    printf("the detail of driver no 1\n");
    printf("the name of driver no 1 \n");
    scanf("%s\n",&d1.name);
    printf("the route is\n");
    scanf("%s\n",&d1.route);
    printf("the no is \n");
    scanf("%s\n",&d1.no);

    printf("the detail of driver no 2\n");
    printf("the name of driver no 2 \n");
    scanf("%s\n",&d2.name);
    printf("the route is\n");
    scanf("%s\n",&d2.route);
    printf("the no is \n");
    scanf("%s\n",&d2.no);

    printf("the detail of driver no 3 \n");
    printf("the name of driver no 3 \n");
    scanf("%s\n",&d3.name);
    printf("the route is\n");
    scanf("%s\n",&d3.route);
    printf("the no is \n");
    scanf("%s\n",&d3.no);

printf("**********the detail of driver \n");
printf("the driver 1 name is %s\n ",d1.name);
printf("the route is %s\n ",d1.route);
printf("the no is %s\n",d1.no);

printf("the driver 2 name is %s\n ",d2.name);
printf("the route is %s\n ",d2.route);
printf("the no is %s\n",d2.no);

printf("the driver 3 name is %s\n ",d3.name);
printf("the route is %s\n ",d3.route);
printf("the no is %s\n",d3.no);

}