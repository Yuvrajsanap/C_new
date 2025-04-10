#include<iostream>
using namespace std;
class complex;
class calculator                      //calculator..> is friend class
{
    public :
    int add(int a,int b){
        return (a+b);
    }
  int  shubham(complex,complex);
  int aniket(complex,complex);

};
class complex{
    int a,b;
    // friend int calculator ::  shubham(complex,complex);    //.indiusual friend function
    // friend int calculator ::  aniket(complex,complex);
    friend class calculator;                                    //..>friend class
    public:
    void setnumber(int n1,int n2){
a=n1;
b=n2;
    }
    void printnum(){
        cout<<"the num is"<<a<<b<<endl;
    }
};
int calculator ::shubham(complex a1,complex a2){
    return (a1.a,a2.a);
}
int calculator :: aniket (complex b1,complex b2){
    return (b1.b,b2.b);
}
int main()
{
complex y1,y2;
y1.setnumber(1,2);
y2.setnumber(2,7);
calculator yuvi;
int yx =yuvi.shubham(y1,y2);
cout<<"the value of y1 and y2 is"<<yx<<endl;
int yz =yuvi.aniket(y1,y2);
cout<<"the value of y1 and y2 is"<<yz<<endl;
return 0;
}

