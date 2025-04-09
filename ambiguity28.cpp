#include<iostream>
using namespace std;
class yuvraj{
    public:
    void sanap(){
        cout<<"hyy good morning"<<endl;
    }
};
class shubham{
    public:
    void sanap(){
        cout<<"good noght"<<endl;
    }
};
class aniket:public yuvraj,public shubham{
    int a;
    public:
    void sanap(){
      yuvraj ::sanap();       //-->ambiguity resolve karne ke liye  (yuvraj ::sanap();) yese functin ka use hota hai.
    }
};
int main(){
    yuvraj y;
    y.sanap();

shubham u;
u.sanap();

aniket b;
b.sanap();
}