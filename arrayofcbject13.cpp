#include<iostream>
using namespace std;
class employe{
    int id;
    int salary;
    public:                                                //class me two function banye then main me array banake call karna.
    void shubham(void){
        salary=343456;
        cout<<"the shubham id is "<<endl;
        cin>>id;
    }
    void aniket(void){
        cout<<"the id of aniket is "<<id<<endl;
    }
};
int main(){
    // employe a1,a2;
    // a1.shubham();
    // a2.aniket();

employe sk[2];
for (int i = 0; i < 2; i++)
{
    sk[i].shubham();
    sk[i].aniket();

}
    return 0;
}