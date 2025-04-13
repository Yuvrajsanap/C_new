#include <stdio.h>
#include <stdlib.h>
int main()
// {
//use of malloc
//     int *ptr;
//     int n;
//     printf("Enter the value of code \n");
//     scanf("%d",&n);
//     ptr=(int*)malloc(n*sizeof(int));
// for (int i = 0; i < n; i++)
// {
// printf("Enter the value %d of code \n",i);
// scanf("%d",&ptr[i]);
// }
// for (int i = 0; i <n; i++)
// {
//     printf("Enter the value %d of code %d\n",i,ptr[i]);
//     // scanf("%d",&ptr[i]);
// }
{
    //use of calloc
    // int *ptr;
    // int n;
    // printf("Enter the value of code \n");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value %d of code \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value %d of code %d\n", i, ptr[i]);
    // }
    // //use of realloc
 int *ptr;
    int n;
    printf("Enter the value of code \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d of code \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d of code %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}