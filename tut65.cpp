#include<iostream>
using namespace std;
// template<class t1,class t2>
// class yuvi{
//     public:
//     t1 rohit;
//     t2 virat;
//     yuvi(t1 a,t2 b){
//         rohit=a;
//         virat=b;
//     }
//     void nexta(){
//         cout<<this->rohit<<endl<<this->virat;
//     }
// };
// int main(){
//     yuvi<int, char> rcb(1,'c');
//     rcb.nexta();
//     return 0;
// }

// template<class t1,class t2>
// class myclass{
//     public:
//     t1 data1;
//     t2 data2;
//     myclass(t1 a,t2 b){
//         data1=a;
//         data2=b;
//     }
//     void display(){
//         cout<<this->data1<<endl<<this->data2;
//     }
// };
// int main(){
//     myclass<int ,char> obj(1,'c');
//     obj.display();
//     return 0;
// }
template<class a1,class a2>
class yuvi{
    public:
    a1 mancheatre_city;
    a2 fcb;
yuvi(a1 a,a2 b){
    mancheatre_city=a;
    fcb=b;
}
void hony(){
    cout<<this->mancheatre_city<<endl<<this->fcb;
}
};
int main(){
    yuvi<int ,char> ys(2,'r');
    ys.hony();
    return 0;
}