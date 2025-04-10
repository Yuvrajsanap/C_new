#include<iostream>
using namespace std;
class sk;
class sanap{
    int a;
    friend void add(sanap y1,sk y2);
    public:
    void shubham(int b1){
a=b1;
    }
};
class sk{
    int b;
    friend void add(sanap y1,sk y2);
    public:
    void aniket(int b2){
        b=b2;
    }
};
void add(sanap y1,sk y2){
    cout<<"the sum of two classes is "<<y1.a+y2.b;
}
int main(){
sanap n1;
n1.shubham(4);

sk n2;
n2.aniket(5);
add(n1,n2);
return 0;
}