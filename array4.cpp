#include <iostream>
using namespace std;
int main()
{
    int yuvi[4];
    yuvi[0] = 20;
    yuvi[1] = 21;
    yuvi[2] = 22;
    yuvi[3] = 23;
    cout << "the yuvi age" << yuvi << endl;
    cout << yuvi[0] << endl;
    cout << yuvi[1] << endl;
    cout << yuvi[2] << endl;
    cout << yuvi[3] << endl;

    // int *man=yuvi;
    // cout<<"the value is"<<*(yuvi)<<endl;
    // cout<<"the value is"<<*(yuvi+1)<<endl;
    // cout<<"the value is"<<*(yuvi+2)<<endl;
    // cout<<"the value is"<<*(yuvi+3)<<endl;

    // }
    // int *shubham=yuvi;
    // cout<<"the val"<<*yuvi<<endl;
    // cout<<*(yuvi+1)<<endl;
    // cout<<*(yuvi+2)<<endl;
    // cout<<*(yuvi+3)<<endl;
    // }
    for (int i = 0; i < 4; i++)
    {
        cout << "the value is " << yuvi[i]<<endl;
    }
}