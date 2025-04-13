#include <stdio.h>
void ys(int rows){
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int rows;
    printf("how many rows \n");
    scanf("%d",&rows);
    ys(rows);
    return 0;
}
// void ys(int sanap){
//     for (int i = 0; i <sanap; i++)
//     {
//         for (int j = 0; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
// }
// int main(){
//     int rows;
//     printf("Enter the rows \n");
//     scanf("%d",&rows);
//     ys(rows);
//     return 0;
// }
//....reverse star pattern
// void ys(int aniket){
//     for (int  i = 0; i < aniket; i++)
//     {
//         for (int  j = 0; j <=aniket-i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
// }
// int main(){
//     int shubham;
//     printf("Enter the stars \n");
//     scanf("%d",&shubham);
//     ys(shubham);
//     return 0;
// }
