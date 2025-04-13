#include<iostream>
using namespace std;
class yuvi
{
    int p,q;
    float r,s;
    public :
    yuvi (int a,int b,float c);
    yuvi(int a,int b,int c);
    void ys();
};
yuvi ::yuvi(int x,int y,float z){
    p=x;
    q=y;
    r=z;
    s=p;
    for (int  i = 0; i < y; i++)
    {
        s=s*(1+r);
    }
}
yuvi :: yuvi(int x,int y,int z){
    p=x;
    q=y;
    r=z;
    s=x;
    for (int  i = 0; i < y; i++)
    {
        s=s*(1+r);
    }
}
void yuvi ::ys(){
    cout<<"the value is "<<p<<q<<s<<endl;
}
int main()
{
yuvi a1,a2,a3;
int rohit ,virat;
float kl;
int pandya;

cout<<"enter the value of p,q and r"<<endl;
cin>>rohit,
}