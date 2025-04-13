#include<iostream>
using namespace std;
class complex;
class calculator 
{
    public :
    int add(int a,int b)
    {
        return (a+b);
    }
    int sumrealcomplex(complex ,complex );
    int sumyscomplex(complex ,complex );
};
class complex
{
    int a,b;
    // friend int calculator ::sumrealcomplex(complex ,complex);
    // friend int calculator ::sumyscomplex(complex ,complex);
    friend class calculator;

    public :
    void setnumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printnumber()
    {
        cout<<"the no is "<<a<<"+"<<b<<endl;
    }
};
int calculator ::sumrealcomplex(complex o1,complex o2)
{
    return (o1.a,o2.a);
}
    
    int calculator ::sumyscomplex(complex o1,complex o2){
    return (o1.b,o2.b);
    }
int main()
{ 
complex o1,o2;
o1.setnumber(3,4);
o2.setnumber(8,6);
calculator yuvi;
int yx =yuvi.sumrealcomplex(o1,o2);
cout<<"the value of o1 and o2 is"<<yx<<endl;
int yz =yuvi.sumyscomplex(o1,o2);
cout<<"the value of o1 and o2 is"<<yz<<endl;
    return 0;
}