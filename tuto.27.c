#include<stdio.h>
int main()
{
    int arr[]={367,5,65,6,56,9};
    int* arrayptr = arr;
    printf(" value at positiom 3 the array is %d\n",arr[3]);
    printf("the address of first element of the arrey is %p\n",&arr[0]);
    printf("the address of first element of the arrey is is %p\n",arr);
    printf("the address of second element of the arrey is %p\n",&arr[1]);
    printf("the address of second element of the arrey is %p\n",arr + 1);

    printf("the address of first element of the arrey is %p\n",*(&arr[0]));
    printf("the address of first element of the arrey is is %p\n",(*arr));
    printf("the address of second element of the arrey is %p\n",(*&arr[1]));
    printf("the address of second element of the arrey is %p\n",(*arr + 1));


    return 0;
}