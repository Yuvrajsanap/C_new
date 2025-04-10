#include<iostream>
using namespace std;
class yuvraj{
    public:
    int a;
    float salary;
    yuvraj(int rohit){
        a=rohit;
        salary=84.5;
         }
    yuvraj();            //..>difault function
};
class suraj:public yuvraj{
    int virat;
    public:
    suraj(int kohli){
        a=kohli;
        virat=94;
    }
};
int main(){
    yuvraj sky(3),kl(2);
    cout<<sky.salary<<endl;
    cout<<kl.salary<<endl;
    suraj gill(9);
    cout<<gill.salary<<endl;
return 0;
}

