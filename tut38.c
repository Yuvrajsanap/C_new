#include <stdio.h>
// int main()

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name;
} std;
int main()
{
    typedef int *intpointer;
    intpointer a, b;
    int c = 84;
    a = &c;
    b = &c;
    return 0;
}
//     std s1,s2;
//     s1.id=73;
//     s2.id=83;
//     printf("value of s1's is Id %d\n",s1.id);
//     printf("value of s2's is Id %d\n",s2.id);
// return 0;
// }
// {
//     typedef unsigned long ui;
//     ui a=34 ,b=55;
//     printf("a=%d\n",a);
//     printf("b=%d\n",b);
//     return 0;
// }