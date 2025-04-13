#include<iostream>
using namespace std;
class yuvi{
    int x,y;
    public :
    yuvi(int a,int b){
        x=a;
        y=b;
    }
void yz(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}
};
int main()
{
    yuvi p(3,5);
    p.yz();
return 0;


}

