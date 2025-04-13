#include <stdio.h>
int main()
{
    int marks[2][4] = {{3, 56, 80, 150},
    {9, 5, 3, 7}};
    // int i = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", marks[i][j]);
        }
        printf("\n");
    }
    //     for( i = 0; i < 6; i++)
    //     {
    //         printf("Enter the value of %d element of the arry",i);
    // scanf("%d",& marks[i]);
    //     }
    //     for( i = 0; i < 6; i++)
    //     {
    //         printf(" The value of %d element of the arry is %d\n",i,marks[0]);
    // scanf("%d",& marks[i]);
    //     }
    return 0;
}