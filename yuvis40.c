#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
   {

        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("the value %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {2, 5, 3, 7, 8, 6};
    printf("the value is \n");
    arrayprint(arr);
    arrayRev(arr);
    printf("the value is \n");
    arrayprint(arr);
}