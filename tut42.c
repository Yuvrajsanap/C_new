#include<stdio.h>
int yuvraj()
{
    static int i=0;
i++;
return i;
}
int main()
{
    printf("value:%d",yuvraj());
    printf("\nvalue:%d",yuvraj());
    printf("\nvalue:%d",yuvraj());
    printf("\nvalue:%d",yuvraj());
    printf("\nvalue:%d",yuvraj());
    printf("\nvalue:%d",yuvraj());

    return 0;
}

