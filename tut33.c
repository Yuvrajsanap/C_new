#include<stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    void reversedstarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <=rows-i- 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int rows, type;
    printf("Enter the 0 for star pattern and 1 for reversed pattern\n");
    scanf("%d",&type);
    printf("How many rows do you want ?\n");
    scanf("%d",&rows);
    switch (type)
    {
    case 0:
    starpattern(rows) ;
         
        break;
 case 1:
   reversedstarpattern (rows) ;
         
        break;
    default:
    // printf("You have enterd invalid choice");
        break;
    }
    return 0;
}