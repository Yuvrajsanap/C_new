#include<iostream>
using namespace std;
class ys{
    int a,b;
public :
ys(int x,int y=888888){
    a=x;
    b=y;
}
ys(int x){
    a=x;
}
void yuvraj();
};
void ys :: yuvraj(){
cout<<"the value is"<<a <<" and "<< b<<endl;
}
int main(){
    ys a1(4);
    a1.yuvraj();
    return 0;
}