#include<iostream>
using namespace std;
class yuvi{
    int a;
    int b;
    public:
    // yuvi(int vk,int rs):a(vk),b(rs)
    yuvi(int m,int k):a(m),b(k*b)
    {
        cout<<"the value is"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main()
{
    yuvi(4,6);
    return 0;
}
// class ys{
//     int ghansham;
//     int sahil;
//     public:
//     ys(int g,int s):ghansham(g),sahil(s*ghansham){
//                                                      // ys(int a,int b){
//                                                      //     ghansham=a*b;
//                                                      //     sahil=b;
//         cout<<ghansham<<endl;
//         cout<<sahil<<endl;
//     }
// };
// int main()
// {
//     ys(2,4);
//     return 0;
// }