#include<iostream>
using namespace std;
class jaybhole{
    int a;
    public:
     void setys(int a){
        this->a=a;                          //...>same variable hai use karte hai this operator.
    }
    void printys(){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
    jaybhole ys;
    ys.setys(5);
    ys.printys();
    return 0;
}