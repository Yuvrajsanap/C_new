#include<iostream>
using namespace std;
class yuvraj{
    int name[100];
    int id[100];
    int fd;
    public:
    void mayur(void){fd=0;}
void om(void);
void sahil(void);
};
void yuvraj :: om(void){
    cout<<"the name is"<<fd +1<<endl;
    cin>>name[fd];
cout<<"the id is "<<endl;
cin>> id[fd];
fd++;
}
void yuvraj ::sahil(void){
    for (int i = 0; i < fd; i++)
    {
       cout<<"the name is "<<name[i]<<" is "<<id[i]<<endl;
    }
    
}
int main(){
    yuvraj acenture;
    acenture.mayur();
    acenture.om();
    acenture.om();
    // acenture.om();
    // acenture.om();
    // acenture.om();
    acenture.om();
    acenture.sahil();
    return 0;
}

