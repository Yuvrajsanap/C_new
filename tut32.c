#include<stdio.h>
// int sum(int arr[])
// {
//     int sum_of_array=0;
//     for (int  i = 0; i < 6; i++)
//     {
//         return sum_of_array;
//     }
//     int main()
//     {
//         int result,array[]={24,66,43,28};
//         result=sum(array);
//         printf("Result = %d",result);
//         return 0;
//     }

// }

// void display(int *ptr)
// {
//     printf("%d",*ptr);
// }
//     int main ()
// {
//     int arr[] ={2,4,6,76};
//     for ( int i = 0; i < 6; i++)
//     {
//         display(&arr[i]);
//     }
//     return 0;
// }


void display (int *ptr)
{
    printf("%d",*ptr);
}
int main()
{
    int arr[]={2,5,8,3};
    for ( int i = 0; i < 4; i++)
    {
        display (&arr[i]);
    }
    return 0;
}