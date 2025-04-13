#include<iostream>
using namespace std;
int gamer=0;
class yuvi{
    int x;
    public :
    yuvi (){//this is constroctor
        gamer ++;
        cout<<gamer<<endl;
    }
    ~yuvi(){   //this is distroctor
        gamer --;
        cout<<gamer<<endl;
    }
};
int main()
{cout<<endl;
yuvi n1;
{
    cout<<endl;
    cout<<endl;
    yuvi n2,n3;
    cout<<endl;
}
cout<<endl;
return 0;

}
