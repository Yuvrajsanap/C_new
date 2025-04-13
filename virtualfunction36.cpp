#include<iostream>
using namespace std;
class base{
    public:
    int a=45;
   virtual void druv(){
        cout<<"the value of a is  "<<a<<endl;
    }
};
class derived:public base{
    public:
    int b=87;
    void druv(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    base *yuvi;
    base kl;
    derived aithaya;
    // yuvi->a;
    yuvi=&aithaya;
    yuvi->druv();
    return 0;
}