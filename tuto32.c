#include<stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
    }
    return 0;
}
void func2(int *ptr)
{
    for ( int i = 0; i < 6; i++)
    {
        printf("the value of %d of %d\n",i,(*ptr + i));
    }
 *(ptr+2)=676;   
 
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 6; i++)
    {
        for ( int j= 0; j < 6; j++)
        {
        printf("the value at %d,%dis %d\n",i,j,arr[i][j]);
        }
        
    }
}   
int main()
{
    int arr[][2]={{2,1},{9,3}};
//     printf(" %d\n",arr[]);
// func1(arr);
func3(arr);
return 0;
}