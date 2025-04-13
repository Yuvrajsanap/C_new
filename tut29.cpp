#include<iostream>
using namespace std;
class yuvi{
    int a,b;
    public:
    yuvi(void);
    void sk(){
        cout<<"the value of a and b is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
yuvi :: yuvi(void)
{
    a=89;
    b=45;
}
int main()
{
    yuvi a1,a2,a3;
    a1.sk();
    a2.sk();
    a3.sk();
    return 0;

}


// class complex 
// {
//     int a,b;
//     public:
//     complex(void);
//  void printnumber()
//  {
//      cout<<"the value is "<<a<<"+"<<b<<"i"<<endl;
//  }

// };
// complex :: complex(void){
//     a=19;
//     b=38;
// }
// int main()
// {
//     complex x;
//     x.printnumber();
//     return 0;
// }


// class yuvi
// {
//     int a,b;
//     public:
//     yuvi(void);
//     void hy()
//     {
//         cout<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// yuvi ::yuvi(void){
//     a=34;
//     b=335;
// };
// int main()
// {
//     yuvi x;
//     x.hy();
//     return 0;
// }

class xvier
{
    int x,y;
    public:
    xvier(void);
    void noob(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
xvier ::xvier(){
x=33;
y=367;
};
int main()
{
    xvier yz;
    yz.noob();
    return 0;
}