#include<iostream>
using namespace std;
class yuvi 
{
    protected :
    int a1;
    public:
    void lordstark(int a){
        a1=a;
    }
};
class ys{
    protected :
    int a2;
    public:
    void nedstark(int b){
        a2=b;
    }
};
class dream
{
    protected:
    int a3;
    public:
    void winterfell(int k){
        a3=k;
    }
};
class arya:public yuvi,public ys,public dream
{
    public:
    void dotraki(){
    cout<<"the age of lordstark is"<<a1<<endl;
    cout<<"the age of nedstark is "<<a2<<endl;
    cout<<"the winterfell is how much year old "<<a3<<endl;
    cout<<"the sum of all age is "<<a1+a2+a3<<endl;
    }
};
int main()
{
    arya robertbarathin;
    robertbarathin.lordstark(29);
    robertbarathin.nedstark(90);
    robertbarathin.winterfell(70);
robertbarathin.dotraki();
return 0;
}