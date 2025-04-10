#include<iostream>
using namespace std;
// class sanap{
//     int a;
//     int b;
//     public:
//     sanap(int y1,int y2) : a(y1),b(y2){
// cout<<"constructer is"<<endl;
// cout<<"the valaue of a is"<<a<<endl;
// cout<<"the valaue of b is"<<b<<endl;
//     }
// };
// int main(){
//     sanap y(5,6);
//     return 0;
// }
class ajjubhai{
    int a;
    int b;
    public:
    // ajjubhai(int y1,int y2 ):a(y1),b(y2)
    ajjubhai(int y1,int y2 ):a(y1),b(a(y1)*y2)
    {
        cout<<"the constructer"<<endl;
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
    }
};
int main(){
    ajjubhai y(7,5);
    return 0;
}