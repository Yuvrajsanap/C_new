#include<iostream>
using namespace std;
class a{
    public:
    void rrr(){
        cout<<"good morning"<<endl;
    }
};
class b:public a{
    public:
    void liger(){
        cout<<"goog ny8"<<endl;
    }
};
int main()
{
    a p;
    p.rrr();
    b q;
    q.liger();
    return 0;
}