#include<iostream>
using namespace std;
class employe
{
    int id;
    static int count;
    public :
    void setdata(void)
    {
        cout<<"the value is "<<endl;
        cin>>id;
        count ++;
    }
    void getdata(void)
    {
        cout<<"the id is jay sanap employe "<<id<<" and the employe"<<count<<endl;
    }
static void getcount(void)
{
cout<<"the value of count is "<<count<<endl;
}
};
int main ()
{   
    employe zayan;
    zayan.setdata();
    zayan.getdata();
    // employe :: getcount();
    return 0;
}