#include<iostream>
using namespace std;
class simpale{
int a,b;
public:
void getsimpale(){
    cout<<"enter the value of a"<<a<<endl;
    cin>>a;
    cout<<"enter the value of b"<<b<<endl;
}
void printsimple(){
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
}
};
class scientific{
  int c,d;
  public:
  void getscentific(){
    cout<<"enter the value of a"<<c<<endl;
    cin>>c;
    cout<<"enter the value of b"<<d<<endl;
    // cin<<d;
  }  
};
class sanap:public simpale,public scientific{

}
int main(){
    
}
