#include<iostream>
using namespace std;
// int sum (int a, int b)
// {
//     int c=a+b;
//     return c;
// }
// .........................
// void swapointer(int x,int y)           //.....call by vallue using swap function
// {
//    int  temp=x;
//    x=y;
//    y=temp;

// }
// int main()
// {
//     int a=5,b=4;
//     cout<<"the value of a is "<<a<<endl<<" the value of b is "<<b<<endl;
    // swapointer(a,b);
//     cout<<"the value of a is "<<a<<endl<<" the value of b is "<<b<<endl;
// return 0;
// }
// .....................................................................................
// void swapointer(int* x,int* y)     //call by value using pointter
// {
//    int  temp=*x;
//    *x=*y;
//    *y=temp;

// }
// int main()
// {
//     int a=5,b=4;
//     cout<<"the value of a is "<<a<<endl<<" the value of b is "<<b<<endl;
//     swapointer(&a,&b);
//     cout<<"the value of a is "<<a<<endl<<" the value of b is "<<b<<endl;
// return 0;
// }
// .........................................
void swapointer(int &x,int &y)           //.....call by referance using swap function
{
   int  temp=x;
   x=y;
   y=temp;

}
int main()
{
    int a=5,b=4;
    cout<<"the value of a is "<<a<<endl<<" the value of b is "<<b<<endl;
    swapointer(a,b);
    cout<<"the value of a is "<<a<<endl<<" the value of b is "<<b<<endl;
return 0;
}