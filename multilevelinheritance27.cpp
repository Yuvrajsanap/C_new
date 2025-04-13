#include<iostream>
using namespace std;
// class yuvraj{
//     protected:
//     int shambu;
//     public:
//     void setdata1(int a){
//         shambu=a;
//     }
// };
// class suraj{
//     protected:
//     int shambu2;
//     public:
//     void setdata2(int b){
//         shambu2=b;
//     }
// };
// class word{
//     protected:
//     int shambu3;
//     public:
//     void setdata3(int c){
//         shambu3=c;
//     }
// };
// class sanap :public yuvraj,public suraj,public word{
//     public:
// void display(){
//     cout<<"the age of yuvraj is"<<shambu<<endl;
//     cout<<"the age of suraj is"<<shambu2<<endl;
//     cout<<"the ade is"<<shambu3<<endl;
//     cout<<"the sum of age is"<<shambu + shambu2 + shambu3<<endl;
// }
// };
// int main(){
//     sanap yuvi;
//     yuvi.setdata1(70);
//     yuvi.setdata2(5);
//     yuvi.setdata3(60);
//     yuvi.display();
//     return 0;
// }
class father{
    protected:
    int name1;
    public:
    void sanap1(int a){
        name1=a;
    }
};
class maother{
    protected:
    int name2;
    public:
    void sanap2(int b){
        name2=b;
    }
};
class word{
    protected:
    int name3;
    public:
    void sanap3(int c){
        name3=c;
    }
};
class me :public father,public maother ,public word{
    public:
    void display(){
        cout<<"the father name"<<name1<<endl;
        cout<<"the mother name "<<name2<<endl;
        cout<<"the namen of me "<<name3<<endl;
        cout<<"the sum is "<<name1 + name2 + name3<<endl;
    }
};
int main(){
    me yuvraj;
    yuvraj.sanap1(60);
    yuvraj.sanap2(55);
    yuvraj.sanap3(64);
    yuvraj.display();
    return 0;
}