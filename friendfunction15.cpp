#include<iostream>
using namespace std;
class sanap{
friend sanap sumsanap(sanap a1,sanap a2) ;
    int a,b;
    public:
// friend sanap sumsanap(sanap a1,sanap a2) ;
    void setnumber(int b1,int b2){
        a=b1;
        b=b2;
    }
    void printnumber(){
cout<<"the number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
sanap sumsanap(sanap c1,sanap c2){
sanap c3;
c3.setnumber((c1.a+c2.a),(c1.b+c2.b));
return c3;
}

int main(){
    sanap y1,y2,y3;
y1.setnumber(1,2);
y1.printnumber();

y2.setnumber(3,4);
y2.printnumber();

y3=sumsanap(y1,y2);
y3.printnumber();
return 0;
}