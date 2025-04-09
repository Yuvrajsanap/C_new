#include<iostream>
using namespace std;
class yuvraj{
    int a;
    public:
    yuvraj(){        //..>default constructer karnahe pdtahe !
        a=0;
    }
    yuvraj(int n){
        a=n;
    }
    yuvraj(yuvraj &ys){            //..>copy constructer
        cout<<"this is called copy constructer"<<endl;
        a=ys.a;
    } 
    void print(){
        cout<<"the value is"<<a<<endl;
    }
};
int main(){
    yuvraj a1,a2,a3(74);
    a1.print();
    a2.print();
    a3.print();

    yuvraj z1(a2);
    z1.print();

}