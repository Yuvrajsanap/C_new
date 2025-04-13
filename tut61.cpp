#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream yuvi("yuvi.tm");
    string ys;
    // cout<<"what is your name";
    cin>>ys;  
    yuvi<<ys;
};
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream yuvi("yuvi.tm");
//     string ys;
//     yuvi>>ys;
//     cout<<"hii good morning"<<ys;
//     yuvi.close();
// }