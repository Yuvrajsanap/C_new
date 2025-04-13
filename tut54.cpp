#include<iostream>
using namespace std;
class yuvi{
    public:
    int a1;
    void zndya(){
cout<<"the age of zndya is :"<<a1<<endl;
    }
};
class ys:public yuvi{
    public:
    int a2;
    void ncn(){
        cout<<"the age of zyanda is "<<a1<<endl;
        cout<<"the ncp is"<<a2<<endl;
    }
};
int main(){
    yuvi *yuvi_ptr;
yuvi x1;
ys x2;
yuvi_ptr=&x2;
yuvi_ptr->a1=30;
yuvi_ptr->zndya();

yuvi_ptr->a1=477;
yuvi_ptr->zndya();

ys *ys_ptr;
ys_ptr->a2=44;
ys_ptr->ncn();
ys_ptr->a2=3434;
ys_ptr->ncn();
return 0;
}