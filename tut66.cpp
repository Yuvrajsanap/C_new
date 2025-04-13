#include<iostream>
using namespace std;
template<class t1=int ,class t2=float>
class yuvi{
    public:
    t1 a;
    t2 b;
    yuvi(t1 p1,t2 p2){
        a=p1;
        b=p2;
    }
    void stress(){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
    }
};
int main(){
    yuvi <> q(1,4.5);
q.stress();
cout<<endl;
yuvi<float,char> w(6.2,'r');
w.stress();
return 0;
}
