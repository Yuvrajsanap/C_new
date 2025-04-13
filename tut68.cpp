#include<iostream>
using namespace std;
template<class t>
class yuvi{
    public:
    t sanap;
    yuvi(t a){
        sanap=a;
    }
    void sp();
};
// void yuvi(int a){
//     cout<<"the first func is"<<a<<endl;
}
template<class t>
void yuvi<t>::sp(){
    cout<<sanap;
}
// int main(){
//     yuvi<int> y(4);
// cout<<y.sanap<<endl;
// y.sp();
// return 0;
// }
int main(){
    yuvi<char > w('r');
    // cout<<w.sanap<<endl;
    w.sp();
return 0;
}
