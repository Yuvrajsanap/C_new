#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *yuvi;
    int num1, num2;
    yuvi = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    // printf("the vlaue is %s\n",yuvi);
    // printf("the string %d\n,num1");
    // printf("the num2 is %d\n",num2);
    if (strcmp(yuvi, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(yuvi, "substract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(yuvi, "multiplay") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(yuvi, "division") == 0)
        ;
    {
        printf("%d\n", num1 / num2);
    }
    return 0;
}
