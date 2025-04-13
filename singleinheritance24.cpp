#include<iostream>
using namespace std;
class yuvraj{           
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void yuvraj ::setdata(void){
    data1=1;
    data2=2;
}
int yuvraj ::getdata1(){
    return data1;
} 
int yuvraj ::getdata2(){
    return data2;
}
class sanap : public yuvraj{
    int data3;
    public:
    void war1();
    void war2();
};
void sanap ::war1(){
    data3=data2*getdata1();
}
void sanap ::war2(){
    cout<<"data 1"<<getdata1()<<endl;
    cout<<"data 2"<<data2<<endl;
    cout<<"data 3"<<data3<<endl;
}
int main(){
    sanap ys;
    ys.setdata();
    ys.war1();
    ys.war2();
    return 0;
}