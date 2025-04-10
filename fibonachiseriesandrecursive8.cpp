#include<iostream>
using namespace std;
// int factorial(int n){          //......factorial n*function(n-1)
//     if (n<2)
//     {
//     return 1;
//     }
//     return n*factorial(n-1) ;
// }
// int main(){
//     int a;
//     cout<<"the value is "<<endl;
//     cin>>a;
//     cout<<"the toatal value is "<<factorial(a);
// }
int factorial(int n){
    if (n<2)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int a;
    cout<<"the value is"<<endl;
    cin>>a;
    cout<<factorial(a);
}