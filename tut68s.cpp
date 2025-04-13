#include<iostream>
using namespace std;
template <class t>
class yuvi{
    t rohit;
    yuvi(t a){
        rohit=a;
    }
    void display();
};
void display(int a){
    cout<<"the first func is "<<a<<endl;
}
template <class t>
void display1(t a){
    cout<<"second"<<a<<endl;
}
template<class t>
void display2(t a){
    cout<<"third"<<a<<endl;
}
int main(){
    display(4);

    return 0;
}