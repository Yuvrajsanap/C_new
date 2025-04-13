#include<iostream>
#include<cstring>
using namespace std;
class yuvraj{
    protected:
    string a;
    float b;
    public:
    yuvraj(string s,float r){
        a=s;
        b=r;
    }
   virtual void display(){}
};
class shubham: public yuvraj{
    float c;
    public:
    shubham(string s,float r,float c1):yuvraj(s,r){
        c=c1;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
class aniket: public yuvraj{
    float d;
    public:
    aniket(string s,float r,float d1):yuvraj(s,r){
        d=d1;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<d<<endl;
    }
};
int main(){
    string a;
    float rating,counting;
    int words;

//for shubham
    a="hell yuvi family";
    rating=73.4;
    counting=74.4;
    words=5;
    shubham sk(a,rating,counting);

    //for aniket
    a="good night";
    rating=43.6;
    counting=86.5;
    aniket ks(a,rating,counting);

    yuvraj *yuvi[2];
    yuvi[0]=&sk;
    yuvi[1]=&ks;

    yuvi[0]->display();
    yuvi[1]->display();
    return 0;
}
// class sanap{
//     protected:
//     string a;
//     float b;
//     public:
//     sanap(string s,float r){
//         a=s;
//         b=r;
//     }
//     virtual void display(){}
// };
// class derived1:public sanap {
//     float c;
//     public:
//     derived1(string s,float r,float c1):sanap(s,r){
//         c=c1;
//     }
//     void display(){
//     cout<<"the valie of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<endl;
//     cout<<"the value of c is "<<c<<endl;
//     }
// };
// class derived2:public sanap{
//     float d;
//     public:
//     derived2(string s,float r,float d1):sanap(s,r){
//         d=d1;
//     }
//     void display(){
//         cout<<"the valie of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<endl;
//     cout<<"the value of c is "<<d<<endl;
//     }
// };
// int main(){
//     string rohit;
//     float kohli,surya;
//     int msd;
    
//     rohit="hy";
//     kohli=6.7;
//     surya=8.8;
//     derived1 mrunal(rohit,kohli,surya);

//     rohit="nope";
//     kohli=8.9;
//     surya=77.8;
//     derived2 anupma(rohit,kohli,surya);

//     sanap *yuvi[2];
//     yuvi[0]=&mrunal;
//     yuvi[1]=&anupma;

//     yuvi[0]->dispaly();
//     yuvi[1]->dispaly();
//     return 0;
// }