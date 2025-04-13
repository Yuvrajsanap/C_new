#include<stdio.h>
#include<string.h>
union Book
{
    int pages;
    float price;
    char title[28];
};
int main ()
{
    union Book b1;
    b1.pages =100;
    printf("pages:%d\n",b1.pages);
    b1.price=537;
    printf("price:%f\n",b1.price);
   strcpy(b1.title,"unstopeble");
   printf("title:%s\n",b1.title);
   return 0;
}