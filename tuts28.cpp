#include<iostream>
using namespace std;
class ys;
class yuvi{
    int x;
    friend void exchange(yuvi &,ys &);
    public :
    void setdata(int data){
        x=data;
    }
    void display(void){
        cout<<x<<endl;
    }
};
class ys{
    int y;
    friend void exchange(yuvi &,ys &);
    public :
    void setdata(int data){
        y=data;
    }
    void display(void){
        cout<<y<<endl;
    }
};
void exchange(yuvi &m,ys &n){
    int temp=m.x;
    m.x=n.y;
    n.y=temp;
}

int main()
{
    yuvi a1;
    ys b1;
    a1.setdata(2);
b1.setdata(6);
exchange(a1,b1);

cout<<"the value of yuvi is :"<<endl;
a1.display();
cout<<"the value of ys is :"<<endl;
b1.display();
    return 0;
}