#include<iostream>
using namespace std;
template<class t1=int,class t2=float,class t3=char>
class sanap{
    public:
    t1=a;
    t2=b;
    t3=c;
    sanap(t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
int main(){
    sanap <> ys(3,5.5,'g');
    
}