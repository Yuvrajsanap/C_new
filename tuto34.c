#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
    printf("%c",str[i]);
    i++;
    }
    printf("\n");
}
int main()
{
    char str[65];
    gets(str);
    printf(" using custm function printstr\n");
    printstr(str);
    printf("usind printf %s\n", str);
    printf("using puts:\n");
    puts(str);
    return 0;
}