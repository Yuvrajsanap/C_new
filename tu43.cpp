#include<iostream>
using namespace std;
class yuvi{
    public:
    void virat(){
        cout<<"most cetury in ipl"<<endl;
    }
};
class yz{
    public:
    void rohit(){
        cout<<"most runs in odi"<<endl;
    }
};
class honyy: public yuvi,public yz //this is ambiguity
{
    // int a;
    public:
    void rohit(){
        yz::rohit();
    }
};
int main()
{
    yuvi zyan;
    yz ms;
    ms.rohit();
    zyan.virat();
honyy s;
s.rohit();
return 0;
}