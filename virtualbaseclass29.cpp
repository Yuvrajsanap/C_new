#include<iostream>
using namespace std;
class college{
    protected:
    int a;
    public:
    void setclg(int y1){
        a=y1;
    }
    void printclg(void){
        cout<<"the collge grade is "<<a<<endl;
    }
};
class student:virtual public college{
    protected:
    int b;
    public:
    void setstd(int y2){
        b=y2;
    }
    void printstd(void){
        cout<<"the student div is "<<b<<endl;
    }
};
class subject :virtual public college{
    protected:
    int math ,physics;
    public:
    void setsub(float x1,float x2){
        math=x1;
        physics=x2;
    }
    void printsub(void){
        cout<<"the marks is "<<math<<" and "<<physics<<endl;
    }
};
class result :virtual public student,virtual public subject{
    public:
    float perentage;+
     345
    void display(void){
perentage=math+physics+b;
 printclg();
 printstd();
 printsub();
    cout<<"your percentaage is  "<<perentage<<endl;
    }
};
int main(){
    result shubham;
    shubham.setclg(73);
    shubham.setstd(63);
    shubham.setsub(73.34,82.85);
    shubham.display();
    return 0;
}