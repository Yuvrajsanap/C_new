#include<iostream>
using namespace std;
template<class T>
class yuvi{
    public:
    int *arr;
    int size;
    yuvi(int a){
        size=a;
        arr=new int [size];
    }
    int hritik(yuvi &y){
        int b=0;
        for (int i = 0; i < size; i++)
        {
           b+=this->arr[i]*y.arr[i];
        }
        return b;
    }
};
int main()
{
    yuvi<int> a1(2);
    a1.arr[0]=33;
    a1.arr[1]=56;
    yuvi<int> a2(2);
    a2.arr[0]=54;
    a2.arr[1]=32;
    int x=a1.hritik(a2);
    cout<<x<<endl;
    return 0;
}
// template<class t>
// class yuvi
// {
//     public:
//     t *arr;
//     int size;
// yuvi(int a){
//     size=a;
//     arr=new t [size];
// }
// t sk(yuvi &p){
//     t b=0;
//     for (int i = 0; i < size; i++)
//     {
//     b+=this->arr[i]*p.arr[i];
//     }
//     return b;
// }
// };
// int main(){

//     yuvi<float>x1(3);
//     x1.arr[0]=23;
//     x1.arr[1]=32;
//     x1.arr[2]=54;
//     yuvi<float>x2(3);
//     x2.arr[0]=3.4;
//     x2.arr[1]=2.3;
//     x2.arr[2]=34.343;
//     float k=x1.sk(x2);
//     cout<<k<<endl;
//     return 0;
// }