#include<iostream>
using namespace std;
// int sum(int a,int b){
// int c=a+b;
// return c;
// }
int sum(int a ,int b);//a,b is the formal paramerter
void y();
int main()
{   int virat,kohli;//virat,kohli is the actual parameter
    cout<<"the value first number"<<endl;
    cin>>virat;
    cout<<"the value of second number is "<<endl;
    cin>>kohli;
    cout<<"the sum is"<<sum(virat,kohli);
    return 0;
}
int sum(int a,int b){
int c=a+b;
return c;
}
void y(){
    cout<<"Hay yuvi world"<<endl;
}