#include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("the value %d\n ",argc);
//     for(int i=0; i<argc ; i++)
//     {
//         printf("the value of argv %d is %s\n",i,argv[i]);
//     }

//     return 0;
// }
int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n",argc);
    for(int i=0 ; i<argc ;i++)
    {
        printf("the value of argv %d is %s\n",i,argv[i]);
    }
    return 0;
}
