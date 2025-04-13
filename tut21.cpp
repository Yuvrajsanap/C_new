#include<iostream>
using namespace std;
// class employee
// {
//     private :
//     int a,b,c;
//     public :
//     int d,e;
//     void setdata(int a1,int b1,int c1);
//     void getdata(){
//         cout<<"the value of a is"<<a<<endl;
//         cout<<"the value of b is "<<b<<endl;
//         cout<<"the value c is"<<c<<endl;
//         cout<<"the value of d is"<<d<<endl;
//         cout<<"the value of e is"<<e<<endl;
//     }
// };
// void employee :: setdata(int a1,int b1,int c1){
// a=a1;
// b=b1;
// c=c1;
// }
// int main()
// {   employee virat;
// // virat.a=73;
// virat.d=37;
// virat.e=64;
// virat.getdata();
// virat.setdata(2,4,5);
//     return 0;
// }
class school
{
    private :
   int  a,b,c;
    public :
int d,e;
void yuvi(int techer,int student ,int sir);
void headmaster(){
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
    cout<<"the value of c is"<<c<<endl;
    cout<<"the value of d is"<<d<<endl;
    cout<<"the value of e is"<<e<<endl;
}
};
void school :: yuvi(int techer,int student ,int sir)
{
    a=techer;
    b=student;
    c=sir;
}
int main()
{
    school jonson;
    jonson.d=4;
    jonson.e=73;
    jonson.headmaster();
    jonson.yuvi(3,5,4);
    return 0;
}
