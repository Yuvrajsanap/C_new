#include<iostream>
using namespace std;
class yuvi{
    int sk;
    public:
    // yuvi& cr(int sk){
    void cr(int sk){
        this->sk=sk;
    // return *this;
    }
    void jr(){
        cout<<"the value is :"<<sk;
    }
};
int main(){
    yuvi p;
    // p.cr(3).jr();
    p.cr(3);
    p.jr();
    return 0;
}