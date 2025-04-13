#include<iostream>
using namespace std;
class tsanap{
    protected:
    int rollno;
    public:
    void setgata(int);             // void setgata(int)-->matlab function sirf kuch value lega 
    void getgata(void);            // void getdata(void)-->function kuch print karta hai.
};
void tsanap::setgata(int a){
rollno=a;
}
void tsanap::getgata(){
    cout<<"the roll no is"<<rollno<<endl;
}
class ksanap : public tsanap{
    protected:
    float nsm;
    float mst;
    public:
    void setmarks(float,float);
    void getmarks(void);
};
void ksanap ::setmarks(float x1,float x2){
    nsm=x1;
    mst=x2;
}
void ksanap ::getmarks(){
cout<<"the marks of nsm is"<<nsm<<endl;
cout<<"the marks of mst is"<<mst<<endl;
}
class ysanap : public ksanap{
    float prcentage;
    public:
    void marks(){
        cout<<"the marks is"<<(nsm+mst)/2<<"%"<<endl;
    }
};
int main(){
ysanap yuvraj;
yuvraj.setgata(46);
yuvraj.setmarks(93.45,96.54 );
yuvraj.marks();
return 0;
}