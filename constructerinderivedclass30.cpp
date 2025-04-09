#include<iostream>
using namespace std;
class sanap{
    int data1;
    public:
    sanap(int a){
        data1=a;
    }
    void printsanap(void){
        cout<<"the sanap 1 is"<<data1<<endl;
    }
};
class yuvraj{
    int data2;
    public:
    yuvraj(int b){
        data2=b;
    }
    void printyuvraj(void){
        cout<<"the yuvraj class is"<<data2<<endl;
    }
};
class ys:public sanap,public yuvraj{
    int rohit,virat;
    public:
ys(int m,int n,int o,int p):sanap(m),yuvraj(n)
{
rohit=o;
virat=p;
cout<<"derived class constructer is called"<<endl;
}
void printys(void){
    cout<<"the value of rohit"<<rohit<<endl;
    cout<<"the value of virat"<<virat<<endl;
}
};
int main(){
    ys shubham(1,2,3,4);
    shubham.printsanap();
    shubham.printyuvraj();
    return 0;
}