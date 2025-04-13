#include<iostream>
using namespace std;
class sanap{
    public:                                       //tow class banaye 1.base then drived then main me pointer object bnamye or base ka and derived ke object bnaye.
    int a1;
    void setgata(){                               //base ke pointer me derived ka address store kiya then value set ke then functon call keya.
cout<<"the value of a1 is "<<a1<<endl;
    }
};
class yuvraj: public sanap{
    public:
    int a2;
    void drived(){
        cout<<"the value of a2 is "<<a2<<endl;
    }
} ;
int main(){
    // sanap *pointre_base;
    // sanap shubham;
    // yuvraj rolex;
    // pointre_base=&rolex;
    // pointre_base->a1=75;
    // pointre_base->setgata();

    sanap *ptrbase;
    sanap ys;
    yuvraj sk;
    ptrbase=&sk;
    ptrbase->a1=74;
    ptrbase->setgata();       //......Run time polymorfisam

    ptrbase->a1=82;
    ptrbase->setgata();

    yuvraj *ptrderived;
    ptrderived=&sk;
    ptrderived->a1=64;
    ptrderived->a2=93;
    ptrderived->setgata();
    ptrderived->drived();
return 0;
}