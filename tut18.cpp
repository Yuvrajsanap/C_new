#include <iostream>
using namespace std;
// int factorial(int n){
// if (n<2)
// {
//    return 1;
// }
// return n*factorial(n-1);
// }
// int main()
// {   
//     int a;
//     cout<<"enter the value "<<endl;
//     cin>>a;
//     cout<<"the value of a "<<a<<" is " <<factorial(a)<<endl;
// }

// fibonache series-->//(recrsion and recursive function)
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "enter the number" << endl;
    cin >> a;
    cout << "the value of a " << a << "is " << fib(a) << endl;
    return 0;
}