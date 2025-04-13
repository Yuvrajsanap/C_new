#include <iostream>
using namespace std;
class complex
{
int a,b;
friend complex sumcomple(complex a1,complex a2);
public :
void setnumber(int n1,int n2){
    a=n1;
    b=n2;
}
void printnumber(){
    cout<<"the number is"<<a<<"+"<<b<<"i"<<endl;
}
};
 complex sumcomple(complex a1,complex a2){
    complex a3;
    a3.setnumber((a1.a+a2.a),(a1.b+a2.b));
return a3;
}

 int main()
{
    complex c1,c2,sum;
    c1.setnumber(2,4);
    c1.printnumber();

c2.setnumber(7,2);
c2.printnumber();

sum =sumcomple(c1,c2);
sum.printnumber();
    return 0;
}
