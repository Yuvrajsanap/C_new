#include<iostream>
using namespace std;
template<class t1,class t2>
class sanap{
    t1 data1;
    t2 data2;
    public:
    sanap(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
sanap<int ,float>ys(5,4.5);
ys.display();
return 0;
}