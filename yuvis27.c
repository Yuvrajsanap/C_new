#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 54, 7, 6, 5, 3};
    // int * yuvi= &arr;
    // printf("the arry value %d\n ",arr[3]);
    // printf("the first array value is %d\n",&arr[0]);
    // printf("the first array value is %d\n",arr);
    // printf("the second array value is %d\n",&arr[1]);
    // printf("the array second value is %d\n",arr+1);

    // printf("your first array value is %d\n",*&arr[0]);
    // printf("your first array value is %d\n",*arr);
    // printf("your first array value is %d\n",*&arr[1]);
    // printf("your first array value is %d\n",*arr+1);

    printf("dg %d\n", arr[5]);
    printf("teg eheeg %d\n", &arr[0]);
    printf("the tehe o mya god %d\n", arr);
    printf("the value is %d\n", &arr[1]);
    printf("th ebnag and bhag %d\n", arr + 1);
    printf("the heej ke %d\n", &arr[3]);
    printf("tghge eh he %d\n", arr + 3);

    printf("teg eheeg %d\n", *&arr[0]);
    printf("the tehe o mya god %d\n",* arr);
    printf("the value is %d\n",* &arr[1]);
    printf("th ebnag and bhag %d\n", *arr + 1);
    printf("the heej ke %d\n",* &arr[3]);
    printf("tghge eh he %d\n",*arr + 3);

}