#include<iostream>
using namespace std;
// // template<class t>
// float average(int a,int b){             //..>simple function
//     float avg=(a+b)/2.0;
//     return avg;
// }
// int main(){
//     float a;
//     a=average(4,5);
//     cout<<"the value of a is "<<a<<endl;
// }

// template<class t1,class t2>                      //..>function in templete.
// float average(t1 a,t2 b){
//    float avg=(a+b)/5;
//    return avg;
// }
// int main(){
//     float a;
//     a=average(4,6)/5;
//     cout<<a<<endl;
// }

template<class t>
void yuvi(t &a,t &b){          //..>swap in templete
   t temp=a;
    a=b;
    b=temp;
}
int main(){
   int x=4,y=6;
   yuvi(x,y);
   cout<<x<<endl<<y;
   return 0;
}
