#include<stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[54];
}yuvraj,mayur,nikhil;
void print()
{
    printf("%s,yuvraj.name");
}
int main()
{
    yuvraj.id=1;
    mayur.id=2;
    nikhil.id;
    yuvraj.marks=99;
    mayur.marks=78;
    nikhil.marks=88;
    yuvraj.fav_char='s';
    mayur.fav_char='p';
    nikhil.fav_char='j';
    strcpy(yuvraj.name,"yuvraj is year of the student");
    strcpy(nikhil.name,"nikhil abc");
    // printf(\n);
    return 0;
}