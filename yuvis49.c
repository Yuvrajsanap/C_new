#include<stdio.h>
//using static variable
// int yuvi(int a,int b)
// {
//     static int snap;
//     snap++;
//     printf("the yuvi is %d\n",snap);
//     return snap;
// }
// int main ()
// {
//     int a;
//     int b;
//     int snap =yuvi(3,5);
//      snap = yuvi(3,5);
//      snap = yuvi(3,5);
//      snap = yuvi(3,5);

//     return 0;
// }
//   int pickey(int a,int b)
//  { static int blindre;
//   printf("the value is %d\n",blindre);
//   blindre ++;
//   }
// int main()
// {
//     int a;
//     int b;
//     register int blinder =pickey(5,6);
//      blinder =pickey(5,6); 
//      blinder =pickey(5,6); 
//      blinder =pickey(5,6);
//     return 0; 
// }
 
 //using exert variable
int iornman(int a,int b)
{
extern int thor;
return thor;
}
int thor=868;
int main()
{
int thor = iornman(3,5);
printf("the thor is %d\n",thor);
return 0;
}




//     extern int i=5;


// int  main()
// {
//      extern i;
//     printf("the value of a is %d\n",i);
//     return 0;
// }
// int main() //for automatic variable
// {
//    auto int a=1;
//    auto int b=2;
//    auto char c =6;
   
//     printf("the value is %d\n",a);
//     printf("the value is %d\n",b);
//     printf("the  value is %c\n",c);
//     return 0;
// }