#include<iostream>
using namespace std;
class cricket {
    public:
    int a1=3;
     virtual void mi(){
        cout<<"the captain of mi is :"<<a1<<endl;
    }
};
class ipl:public cricket{
public:
int a2=4;
void mi(){
    cout<<"the captain of mi is :"<<a1<<endl;
    cout<<"the aptain of rcb is :"<<a2<<endl;
}
};
int main()
{
    cricket *yuvi;
    cricket x1;
    ipl x2;

    yuvi =&x2;
    // yuvi->a2=4;
    yuvi->mi();
    return 0;
}
