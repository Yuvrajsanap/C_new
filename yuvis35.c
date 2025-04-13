#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "yuvraj";
    char str2[] = "sham";
    char str3[] = "mahi";
    // printf("the string one and two is compared %d\n", strcmp(str1, str2));
    // printf("the compare the string 1 and two %d\n", strcmp(str3, str2));
    // printf("the lenth of str1 %d\n", strlen(str1));
    // printf("the lenth of str2 %d\n", strlen(str2));
    // printf("the the revers of string one is : ");
    // puts(strrev(str1));
    // printf("the sting two is reversed :");
    // puts(strrev(str2));
    // strcpy(str3,strcat(str1, str2));
    // puts(str3);
    strcpy(str2,strcat(str1,str3));
    puts(str2);
    return 0;
}