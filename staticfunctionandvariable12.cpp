#include<iostream>
using namespace std;
class employe{
    int id;
   static int count;              //..count is sataic variable
    public:
    void  sanap(void){
        cout<<"the name is "<<endl;
        cin>>id;
        count++;
    }                         
    void yuvraj(void){
        cout<<"the id is "<<id<<"the name is "<<count<<endl;
    }
    static void companyname(void){                        //..satatic function ko satatic variable he acess kar sakte hai.
cout<<"the comapnyname is "<<count<<endl;
    }  
};
int employe :: count=200;
int main(){
    employe yuvi,ys,ks;
    yuvi.sanap();
    yuvi.yuvraj();
    employe :: companyname();
    
   ys.sanap();
    ys.yuvraj();
    employe ::companyname();
}