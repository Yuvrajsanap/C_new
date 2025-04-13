#include<iostream>
using namespace std;
template<class t>
// class yuvraj{
//     public:
//     t data;
//     yuvraj(t a){
//         data=a;
//     }
//     void display(){
//         cout<<data<<endl;
//     }
// };
// int main(){
//     yuvraj<float>y(4.5);
//     cout<<y.data<<endl;
//     y.display();
//     return 0;
// }
class yuvraj{
    public:
    t data;
    yuvraj(t a){
        data=a;
    }
    void display();
};
template<class t>
void yuvraj<t>::display(){
    cout<<data;
}
int main(){
    yuvraj<float>y(4.5);
    cout<<y.data<<endl;
    y.display();
    return 0;
}