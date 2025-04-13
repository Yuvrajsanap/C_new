#include<stdio.h>
// struct book {
// char title[20] ;
// char author_name[99];
// float price;
// int pages;
// };
// int main ()
// {
//     struct book book1={"english,abc,70,110"};
//     printf("\ntitle=%s",book1.title);
//     printf("\n name=%s",book1.author_name);
//     printf("\n price =%2f",book1.price);
//     printf("\n pages=%d",book1.pages);
//     return 0;
// }
struct book {
char title[80];
char auther_name[60];
float pages;
int price;
};
int main()
{
    struct book book1 = {" marathi","yuvi.k.s",890 ,467};
    printf("\n title =%s",book1.title);
    printf("\n name =%s",book1.auther_name);
printf("\n pages =%.2f",book1.pages);
printf("\n price =%d",book1.price);
return 0;
}
