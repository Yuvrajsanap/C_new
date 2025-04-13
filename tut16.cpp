#include<iostream>
using namespace std;
int sum(int a,int b){
int c=a+b;
return c;
}
void swappointer(int* x,int* y){
int temp=*x;
*x=*y;
*y=temp;
}
int main()
{   int a=4,b=6;
cout<<"the value of a is"<<a<<"and the value of b is "<<b<<endl;
swappointer(&a,&b);
cout<<"the value of a is "<<a<<" and the value of b is" <<b<<endl;
    return 0;
}