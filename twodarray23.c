#include<stdio.h>
int main()
{
    int marks[][5]={{2,5,3,77,22},
                    {22,34,65,98,4}};
    for(int i=0 ;i < 2 ;i++)
    {
        for (int j = 0; j < 5; i++)
        {
            printf("Enter the marks %d,%d is %d\n",i,j,marks[i][j]);
            // printf("%d",marks[i][j]);
        }
        // printf("\n");
    }
    return 0;
}
