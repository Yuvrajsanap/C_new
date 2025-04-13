#include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE *yuvi=NULL;
//     char tomyshilby [45];
//     yuvi=fopen("the.rock","r");
//     fscanf(yuvi,"%s",tomyshilby);
//     printf("the file is good %s\n",tomyshilby);

//     return 0;
// }
// int main()
// {
//     FILE *yuvi=NULL;
//     char kgf[334];
//     yuvi =fopen("the.rock","r");
//     fscanf(yuvi,"%s",kgf);
//     printf("the roking star yash %s\n",kgf);
//     return 0;
// }
// int main(){
// FILE *yuvi =NULL;
// char no[533];
// yuvi =fopen("the .rock","r");
// fscanf(yuvi,"%s",no);
// printf("alredy broken %s\n",no);
// return 0;
// }
int main ()
{
    FILE *yuvi=NULL;
    char kgf[54];
    yuvi=fopen("the.rock","w");
    fprintf(yuvi,"%s",kgf);
    printf("the value is %s\n",kgf);
    return 0;
}
