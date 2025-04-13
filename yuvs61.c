#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int m,n,sum=0;
//     int a[3][4], b[4][2],result[3][2];
//     printf("calculate the first matrix \n ");
//     for (int i = 0; i <3 ; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//         //    printf("Enter the value of first matrix %d is %d\n",i,j);
//             scanf("%d",&a[i][j]);
//         }
//        printf("\n");
//     }
//     // printf("calculate the second matrix\n");
//    for (int i = 0; i <4 ; i++)
//    {
//       for (int j = 0; j< 2; j++)
//       {
//         //   printf("Enter the second matrix value %d is %d\n",i,j);
//           scanf("%d",&b[i][j]);
//       }
//      printf("\n");
//    }
//    for (int i = 0; i < 3; i++)
//    {
//       for (int j= 0; j < 2; j++)
//       {  //calculate the result
//           for (int k= 0; k < 4; k++)
//           {
//               sum +=a[i][k]*b[k][j];
//           }
//           result[i][j]=sum;
//           sum =0;
//       }
//       //print the result matrix
//       for (int i = 0; i < 3; i++)
//       {
//           for (int j = 0; j < 2 ; j++)
//           {
//               printf("%d\t",result[i][j]);
//           }
//           printf("\n");
//       }
//    }

//     return 0;
// }
int main()
{
    int m, n, sum = 0;
    int a[3][5], b[5][8], result[2][6];
    printf("Enter the first matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // printf("first matrix value %d is %d\n", i, j);
            scanf("%d", &a[i][j]);
        }
        // printf("\n");
    }
    // printf("Enter the second matrix \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // printf("first matrix value%d is %d\n", i, j);
            scanf("%d", &b[i][j]);
        }
        // printf("\n");
        //calculate result
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    sum = a[i][k] * b[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        //printing the resul matrix
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                printf("the result %d\t", result[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}