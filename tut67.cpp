#include<iostream>
using namespace std;//using templet in fuction
// float yuvi(int a,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// int main(){
//     float a;
//     a= yuvi(3,6);
//     printf("the average value of a is %.3f\n",a);
//     return 0;
// }
// template<class t1,class t2>
// float yuvi(t1 a,t2 b){
//     float sammy=(a+b)/2.0;
// return sammy;
// }
// int main(){
//     float b;
//     b=yuvi(3,4);
//     printf("the sammy is %f ",b);
//     return 0;
// }
// template<class t1,class t2>
// float yuvi(t1 a, t2 b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// int main(){
//     float a;
//     a=yuvi(3,4);
//     printf("the ave is %f",a);
//     return 0;
// }
template<class t>
void yuvi(t &a, t &b){
    t temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=3;
    yuvi(x,y);
    cout<<x<<endl<<y;

}