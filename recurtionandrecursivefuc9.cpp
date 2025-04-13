#include<iostream>
using namespace std;
// int sum(int n){
//     if (n<=1)   //..>base case
//     {                         //..recursion is called fuction  call itself
//         return 1;
//     }
//     return n*sum(n-1);
// }
// int main(){
//     int a;
//     cout<<"the value is "<<endl;
//     cin>>a;
//     cout<<"the value is "<<a <<"is "<<sum(a);
//     return 0;
// }
int fib(int n)
{
    if (n==0 ||n==1)
    {
        return n;
    }
    
  return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;

}