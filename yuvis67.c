 #include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr = fopen("the.rock","a+");
    // char y=fgetc(ptr);
    // printf("the rock is %c\n",y);
    // y=fgetc(ptr);
    // printf("the value is %c\n",y);

// char yuvi[20];
// fgets(yuvi,3,ptr);
// printf("the value is %s\n",yuvi);

fputc('o',ptr);
fputs("sky",ptr);
fclose(ptr);
        return 0;
}