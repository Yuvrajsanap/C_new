#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[88];
};
struct student rohit, virat, dhoni;
void yuvi()                       //is also known as global variable(variable acess it)
{ 
    printf("%s",virat.name);
}

int main()
{
     //struct student rohit, virat, dhoni;//this known as local variable(other variable is not acces it)
    rohit.id = 1;
    virat.id = 2;
    dhoni.id = 3;
    rohit.marks = 33;
    virat.marks = 532;
    dhoni.marks = 363;
    rohit.fav_char = 'r';
    virat.fav_char = 'd';
    dhoni.fav_char = 'v';
    strcpy(virat.name,"Harry potter is the best series in hollywod");
    strcpy(rohit.name,"is also named hitman in cricket univarse" );
    // printf("virat got : %s\n", virat.name);
    // printf("the Rohit name is :%s\n",rohit.name);
    // printf("virat got %d\n", virat.id);
    // printf("virat marks is %d\n", virat.marks);
    // printf("the dhoni character %c",dhoni.fav_char);
    yuvi();
    return 0;
}