#include<iostream>
using namespace std;
class football{
    int a,b;
    public:
    void manchestar_united(int p,int q){
        a=p;
        b=q;
    }
    void fcb(){
        cout<<"the messi goal is"<<a<<endl;
        cout<<"the mbapee goal is"<<b<<endl;
    }
};
// int main(){
// football cr;
// cr.manchestar_united(2,4);
// cr.fcb();
// football *cr=new football[2];
// cr->manchestar_united(3,5);
// cr->fcb();

//array of object usin poinetr
// int size=3;
// football *cr=new football[size];
// football *jr=cr;
// int x,y,i;
// for ( i = 0; i < size; i++)
// {
//     cout<<"the ronaldo international goal :"<<i+1<<endl;
//     cin>>x>>y;
//     cr->manchestar_united(x,y);
//     cr++;
// }
// for ( i = 0; i < size; i++)
// {
// cout<<"the neynmar international goal is :"<<i+1<<endl;
// jr->fcb();
// jr++;
// }


// return 0;
// }
int main(){
    int size=2;
    football *cresteano=new football[size];
    football *neynmar=cresteano;
    int g,h,i;
    for ( i = 0; i < size; i++)
    {
        cout<<"the cr7 goal is "<<i+1<<endl;
        cin>>g>>h;
        cresteano->manchestar_united(3,5);
cresteano++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"the jr goal is "<<i+1<<endl;
        neynmar->fcb();
        neynmar++;
    }
    return 0;
}