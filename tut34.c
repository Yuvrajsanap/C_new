#include<stdio.h>
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
// int main()

// {
//     char str[]="yuvraj";
//     printf("%s",str);
//     return 0;
// char aim[56];
// printf("Enter your aim:");
// gets(aim);
// printf("my aim is %s",aim);
// return 0;
// }




// void printstar(char str[])
// {
//     int i=0;
// while (str[i]!='\0')
// {
//  printf("%c",str[i]);
//  i++;
// }
// printf("\n");
// }
int main()
{
    char str[58];
    gets(str);
    printf("using custom function printstr\n");
    printstr(str);
    printf(" using printf %s\n",str);
    printf("using puts:/n");
    puts(str);
    return 0;
}









