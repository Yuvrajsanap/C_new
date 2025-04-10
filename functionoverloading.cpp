#include<iostream>
using namespace std;
int sum(int a,int b){       //function overloading  ..> one he name ke function banana.
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int st1,st2;

    st1=sum(4,5);
    cout<<st1<<endl;
    st2=sum(4,6,3);
    cout<<st2<<endl;

}