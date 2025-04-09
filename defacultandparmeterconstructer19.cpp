#include<iostream>
using namespace std;
class yuvi{
    int a,b;
    public:
    yuvi(int,int);         //..>default constructur ..>automatic run hota hai and kuch value nahe leta.              ..(declare) 
    void zyan(){
        cout<<"the sum of this two no. is "<<a<<"+"<<b<<"i"<<endl;
    }
};
yuvi :: yuvi(int x,int y){        //.......>parametrise constructer..>kuch parameter leta hai.                       ..(difine)
a=x;
b=y;
    }
int main(){
    // yuvi a1(3,5);
    // a1.zyan();
    // yuvi a2(5,6);
    // a2.zyan();

    yuvi a1(9,7);           //..>implicit call
    a1.zyan();

    yuvi a2=yuvi(4,6);      //..>explicite function
    a2.zyan();
    return 0;
}
