#include<iostream>
#include<cmath>
using namespace std;
class simple_calculator   //simple and scientific calculator
{
    public:
    int a,b;
    public:
    void z1(){
        cout<<"the value of a is"<<a<<endl;
        cin>>a;
        cout<<"the value of b is"<<b<<endl;
        cin>>b;
    }
    void z2(){
        cout <<"the value of a+b is"<<a+b<<endl;
        cout <<"the value of a-b is"<<a-b<<endl;
        cout<<"the value of a*b is"<<a*b<<endl;
        cout<<"the value of a/b is"<<a/b<<endl;
    }
};
class scientific_calculator
{
    public:
    int a,b;
    public:
    void z3(){
        cout<<"the value of a "<<a<<endl;
        cin>>a;
        cout<<"the value of b is"<<b<<endl;
        cin>>b;
    }
    void z4(){
        cout<<"the value of sin(a) is"<<sin(a)<<endl;
        cout<<"the value of cos(b)"<<cos(b)<<endl;
        cout<<"the value exponential function is"<<exp(a)<<endl;
        cout<<"the value of tan(a) is"<<tan(a)<<endl;
    }
};
class haybride_calculator :public simple_calculator,public scientific_calculator{

};
int main(){
    // simple_calculator yuvi;
    // yuvi.z1();
    // yuvi.z2();
    // scientific_calculator yuvi;
    // yuvi.z3();
    // yuvi.z4();
    haybride_calculator yuvi;
    yuvi.z1();
    yuvi.z2();
    yuvi.z3();
    yuvi.z4();
}