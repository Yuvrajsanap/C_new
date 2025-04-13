#include <stdio.h>
// void printstr(int str[])
// {
//     int i= 0;
//     while (str[i]!='\0')
//     {
//     printf("%c",str[i]);
//     i++;
//     }
//  printf("\n");
// }
// int main()
// {
//     int str[]={'y','u','v','r','r','a','j','\0'};
// printstr(str);
// return 0;
// }
// void printstr(char str[])
// {
//     char i = 0;
//     while (str[i]!='\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     printf("\n");
// }

// int main()
// {
//     char str[] = "yuvraj";
//     printstr(str);
//     return 0;
// }
void printstr(char str[])
{
    char i=0;
    while ( str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[6]="yuvraj";
    char str[40];
    gets(str);
    printstr(str);
printf("the piro coder is \n");
    printf("the using gets %s\n",str);
    printf("using puts \n");
    puts(str);

    // printstr(str);
    return 0;
}