#include <stdio.h>

void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6-i] = temp;
    }
}
void arrayprint(int arr[]){
for (int i = 0; i < 7; i++)
{
   printf("the value of element  %d is %d\n",i,arr[i]); 
}
}
    int main()
    {
        int arr[] = {1, 2, 3, 4, 5, 6,7};
        printf("Befor revesing the array\n");
        arrayprint(arr);
        arrayrev(arr);
        printf("\nAfter revesing the array");
        arrayprint(arr);
    return 0;
    }

