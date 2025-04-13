#include<iostream>
using namespace std;
// int main(){
//     int a=5;
//     int* ptr=&a;
//     cout<<"the value of a is"<<*ptr<<endl;
//     int* b=new int(67);      //new operation 
//     int* d=new int(53);
//     cout<<"the value of b and d is"<<*b<<endl<<*d<<endl;
// }
// int main(){
//     int *arr=new int[3];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     delete[]arr;
//     cout<<"the value of 0 is"<<arr[0]<<endl;
//     cout<<"the value of 1 is"<<arr[1]<<endl;
//     cout<<"the value of 2 is"<<arr[2]<<endl;
// }
int main()
    {
        int* arr=new int[3];
        arr[0]=723;
        arr[1]=83;
        arr[2]=334;
        // delete[]arr;
        cout<<"the 0 is"<<arr[0]<<endl;
        cout<<"the value of 1 is"<<arr[1]<<endl;
     cout<<"the value of 2 is"<<arr[2]<<endl;
     return 0;
    }
