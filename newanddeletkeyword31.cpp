#include<iostream>
using namespace std;
// int main(){
//     int a=5;                    //..>pointer
//     int*yuvi=&a;
//     cout<<"the addres of a is"<<*(yuvi)<<endl;
//     return 0;
// }
  
// int main(){                           //..>new keyword
//     float *yuvi=new float(3.84);
//     cout<<"the new keyword value is "<<*(yuvi)<<endl;
// }

int main(){
    int *yuvi=new int [4];
    yuvi[0]=83;
    yuvi[1]=83;
    yuvi[2]=83;
    yuvi[3]=83;
    delete[] yuvi;                      //..>use of dekeete keyword to free memory
    cout<<"the value of yuvi[0] is "<<yuvi[0]<<endl;
    cout<<"the value of yuvi[1] is "<<yuvi[1]<<endl;
    cout<<"the value of yuvi[2] is "<<yuvi[2]<<endl;
    cout<<"the value of yuvi[3] is "<<yuvi[3]<<endl;
return 0;
}