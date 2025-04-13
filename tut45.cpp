#include<iostream>
using namespace std;
// cricket-->ipl,odi;
// ipl-->
// odi-->

class cricket{
    protected :
    int rohit;
    public:
    void india(int mahi){
        rohit=mahi;
    }
    void virat(void){
        cout<<"is the captain "<<rohit<<endl;
    }
};
class ipl:virtual public cricket
{
    protected:
    int runs,over;
    public:
    void mi(int sky,int bumb){
        runs=sky;
        over=bumb;
    }
    void ishank(void){
        cout<<"poket dimond"<<runs<<endl<<over<<endl;
    }
};
class odi:virtual public cricket{
protected:
int rk;
public:
void gt(int hadik){
    rk=hadik;
}
void krunal(void){
    cout<<"the man of the match"<<rk<<endl;
}
};
class lsg:public ipl,public odi{
    protected:
    float rabada;
    public:
    void shami(void){
        // cout<<"they also colifiy in 2022 ipl"<<rabada<<endl;
rabada=runs+over+rk;
virat();
ishank();
krunal();
cout<<"they also colifiy in 2022 ipl"<<rabada<<endl;

    }
};
int main()
{
    lsg abd;
    abd.india(89);
    abd.mi(90,86);
    abd.gt(73);
    abd.shami();
}