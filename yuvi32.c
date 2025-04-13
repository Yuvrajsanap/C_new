#include <stdio.h>
// void func3(int arr[2][4])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("the value of %d,%d is %d\n", i, j, arr[i][j]);
//         }
//     }
// }
// int main()
// {
//     int arr[2][4] = {{2, 3, 5, 6}, {9, 8, 7, 1}};
//     printf("the value of %d is %d\n", arr);
//     func3(arr);
//     return 0;

void func3(int arr[2][4])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[2][4] = {{3, 4, 5, 6}, {3, 5, 6, 7}};
    printf("the value %d is %d\n", arr);
    func3(arr);
    return 0;
}
