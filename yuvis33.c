#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversstarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("the star pattern 0 for starpattern and 1 for revers stsrpattern\n");
    scanf("%d", &type);
    printf("the no star you want to\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;
    case 1:
        reversstarpattern(rows);
        break;
    default:
        printf("Enter the star you want");
        break;
    }
    //    reversstarpattern(rows);
    return 0;
}