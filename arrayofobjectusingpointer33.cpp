#include<iostream>
using namespace std;
class sanap{
    int a,b;
    public:
    void yuvi(int c,int d){
        a=c;
        b=d;
    }
    void ys(){
        cout<<"the value if a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    int size=2;
    sanap *xvier=new sanap[size];
    sanap *xvier2=xvier;
    int m,n;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value of a and b "<<endl;
        cin>>m>>n;
        // (*xvier).yuvi(m,n);
        xvier->yuvi(m,n);
        xvier++;
    }
     for (int i = 0; i < size; i++)
     {
        cout<<"the value sequence is "<<i+1<<endl;
        xvier2->ys();
        xvier2++;
     }
     return 0;
}