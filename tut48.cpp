#include<iostream>
using namespace std;
class virat{
    int rcb;
    public:
    virat(int faf){
        rcb=faf;
        cout<<"the virat is"<<endl;
    }
    void patel(void){
        cout<<"the rcb team "<<rcb<<endl;
    }
};
class rohit{
    int mi;
    public:
    rohit(int jb){
        mi=jb;
        cout<<"the rohit is"<<endl;
    }
    void sky(void){
        cout<<"the mi team"<<mi<<endl;
    }
};
class gt:public rohit,public virat{
    int hp,kp;
    public:
    gt(int a,int b,int c,int d):rohit(a),virat(b)
    {
        hp=c;
        kp=d;
        cout <<"the hardik is"<<endl;
    }
    void rk(void){
        cout<<"the hp is"<<hp<<endl;
        cout<<"the kp is"<<kp<<endl;
    }
};
int main()
    {
gt yuvi(1,2,3,4);
yuvi.patel();
yuvi.rk();
yuvi.sky();
return 0;
    }


