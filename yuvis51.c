// #include <stdio.h>
// #include <stdlib.h>
// #include<time.h>
// int tomy(int shilby)
// {
// srand(time(NULL));
// return rand() % shilby;
// }
// int main()
// {
    // printf("the my fav vilan is %d\n",tomy(18));
// return 0;
// }
//using random variable
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// int rohit(int hitman)
// {
//     srand(time(NULL));
//     return rand() %hitman;
// }
// int main()
// {
//     printf("The runs is %d\n",rohit(10));
//     return 0;
// }
int rocky(int kgf)
{
    srand(time(NULL));
    return rand() %kgf;
}
int main()
{
    printf("Roking star yash the is best actor in 2022 and his movie kgf chapter 2 is first day collection is:%d\n",rocky(374));
    return 0;
}