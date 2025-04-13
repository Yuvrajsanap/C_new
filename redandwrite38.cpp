#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // string ys="hy good morning";
    // ofstream out("size.c");     //..>write operation
    // out<<ys;

    string ys;
    ifstream in("size.c");
    in>>ys;
    getline(in,ys);
    cout<<ys;                 //..>read  operatin.  in=cin ketrah kam karta hai(file read) and cout=out ke trah(file write)
    return 0;
}