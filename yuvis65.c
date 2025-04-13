#include <stdio.h>
#include <stdlib.h>
// int ispalindrome(int num)
// {
//  int reversed =0;
//  int orignalnumber =num;
// while (num!=0)
// {
//     reversed = reversed*10 + num % 10;
//     num = num/10;
// }
//    printf("the value is %d\n",reversed);
//    if (orignalnumber == reversed)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }

// }
// int main()
// {
//     int number;
//     printf("the value is \n");
//     scanf("%d",&number);
//    if (ispalindrome(number))
//    {
//     printf("thise the the no of palindrom \n");
//    }
//    else
//    {
//        printf("the value is\n");
//    }
//     return 0;
// }

// int ispalindrome(int num)
// {
//     int reversed = 0;
//     int yuvi = num;

//     while (num != 0)
//     {
//         reversed = reversed * 10 + num % 10;
//         num = num / 10;
//     }
//     printf("the value is palindromr \n", reversed);
//     if (yuvi == reversed)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
//     int main()
//     {
//         int number;
//         printf("the value is \n");
//         scanf("%d",&number);
//         if (ispalindrome(number))
//         {
//             printf("\n");
//         }
//         else
//         {
//             printf("\n");
//         }
//     return 0;
//     }
int ispalindrome(int num)
{
    int revrsed=0;
int yuvi=num;
    while (num != 0)
    {
        revrsed = revrsed * 10 + num % 10;
        num = num / 10;
    }
    printf("the value is %d\n", revrsed);
    if (yuvi == revrsed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("the value is \n");
    scanf("%d", &number);
    if (ispalindrome(number))
    {
        printf("\n");
    }
    else
    {
        printf("\n");
    }
    return 0;
}
