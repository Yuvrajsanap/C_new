#include<iostream>
using namespace std;
// class sanap{
//     public:
//     int *arr;
//     int size;
//     sanap(int m){
//         size=m;
//         arr=new int[size];
//     }
//     int dotproduct(sanap &v){
//         int d=0;
//         for (int  i = 0; i < size; i++)
//         {
//             d+=this->arr[i]*v.arr[i];
//         }
//         return d;
//     }
// };
// int main(){
//     sanap v1(3);
//     v1.arr[0]=4;
//     v1.arr[1]=3;
//     v1.arr[2]=5;
//     sanap v2(3);
//     v2.arr[0]=4;
//     v2.arr[1]=9;
//     v2.arr[2]=6;
//     int a = v1.dotproduct(v2);
//     cout<<a<<endl;
//     return 0;
// }

template <class T>
class sanap{
    public:
    T *arr;
    int size;
    sanap(int m){
        size=m;
        arr=new T[size];
    }
    T dotproduct(sanap &v){
        T d=0;
        for (int  i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    sanap<float> v1(3);
    v1.arr[0]=4.3;
    v1.arr[1]=3.6;
    v1.arr[2]=5.7;
    sanap<float> v2(3);
    v2.arr[0]=4.3;
    v2.arr[1]=9.6;
    v2.arr[2]=6.7;
    float a = v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}