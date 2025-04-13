#include <stdio.h>
#include <string.h>
union book
{
    int pages;
    int title;
    char price[34];
};
int main()
{
    union book a1;
    a1.pages = 95;
    a1.title = 65;
    printf("the value of pages %d\n", a1.pages);
    printf("the value of title %d\n", a1.title);
    strcpy(a1.price, "dhoni is a captaincool");
    printf("the price is %s\n",a1.price);
    return 0;
}