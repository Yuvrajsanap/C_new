#include<stdio.h>
#include<stdlib.h>
int main()
// {
//     int *ptr;
//     int n;
//     printf("the size of array is \n");
//     scanf("%d",&n);
//     ptr = (int *)malloc(n* sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("the array size is \n",i);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//     printf("the size of %d array is %d\n",i,ptr[i]);
//     }
    
    //calloc=contrgeous memory
// { 
//     int *ptr;
//    int n;
//    printf(" the size of array one \n");
//    scanf("%d",&n);
//    ptr = (int *)calloc(n,sizeof(int));
//    for (int i = 0; i < n; i++)
//    {
//        printf("the size of array two is \n",i);
//        scanf("%d",&ptr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("the size of array %d  three is %d\n",i,ptr[i]);
//    }
   //using realloc
  {
       int *ptr;
   int n;
   printf("the size of array is \n");
   scanf("%d",&n);
ptr = (int *)realloc(ptr,n*sizeof(int));
   for (int i = 0; i < n; i++)
   {
       printf("the array one size \n",i);
       scanf("%d",&ptr[i]);
   }
   for (int i = 0; i < n; i++)
   {
    printf("the size of array two %d is %d\n ",i,ptr[i]);
   }
   
     free(ptr);
    
    return 0;
}