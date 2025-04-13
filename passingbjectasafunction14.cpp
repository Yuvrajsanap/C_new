#include<iostream>
using namespace std;            //..>passingg object as function
class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setsum(complex a1,complex a2){          //..>in this line shows funtion me class ue keye he.
        a=a1.a+a2.a;
        b=a1.b+a2.b;
    }
    void printnuber(){
        cout<<"enter the number"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
complex y1,y2,y3;
y1.setdata(1,2);
y1.printnuber();

y2.setdata(3,4);
y2.printnuber();

y3.setsum(y1,y2);
y3.printnuber();
return 0;
}