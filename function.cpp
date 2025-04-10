#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;                    //.....function me jo patameter use hote he use formal parameter
    return c;                     //.....a and b is a variable
}
int main()
{
int x1,y1;
cout<<"the value is "<<endl;       //....main me jo paramerter hote he use actual parameter
cin>>x1;
cout<<"the value of y1 is"<<endl;
cin>>y1;
cout<<"the sum is"<<x1+y1;
return 0;
}

