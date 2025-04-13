#include<iostream>
using namespace std;
int main()
{
    // int marks[]={6,5,7,3};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    int mathmarks[4];
    mathmarks[0]=83;
    mathmarks[1]=73;
    mathmarks[2]=63;
    mathmarks[3]=93;
    cout<<"the value of mathmarks is "<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    
    for (int i = 0; i < 4; i++)  
    {
        cout<<"the value of mathmarks "<<i<<" is"<<mathmarks[i]<<endl;
    }
    
    int* yuvi=mathmarks;
    // cout<<*(yuvi)<<endl;
    // cout<<*(++yuvi)<<endl;
    // cout<<*(++yuvi)<<endl;
    // cout<<*(++yuvi)<<endl;
    cout<<"the value of *yuvi is "<<*yuvi<<endl;
    cout<<"the value of *(yuvi+1) is "<<*(yuvi+1)<<endl;
    cout<<"the value of *(yuvi+2) is "<<*(yuvi+2)<<endl;
    cout<<"the value of *(yuvi+3) is "<<*(yuvi+3)<<endl;

     return 0;
    
}