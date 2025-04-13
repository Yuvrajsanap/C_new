#include <iostream>
using namespace std;
// class yuvi{
//     int rohit,virat;
//     public:
//     void lord(){
//         cout<<"the rohit is"<<rohit<<endl;
//         cout<<"the virat is"<<virat<<endl;
//     }
//     void ned(int a,int b){
//         rohit=a;
//         virat=b;
//     }
// };
// int main()
// {
//     // yuvi ptr;
//    yuvi* ptr=new yuvi;
//     (*ptr).ned(3,5);
//     (*ptr).lord();
//     return 0;
// }
class ys
{
    int mi, csk;

public:
    void rk()
    {
        cout << "the team mi is" << mi << endl;
        cout << "the team csk is" << csk << endl;
    }
    void md(int p, int q)
    {
        mi = p;
        csk = q;
    }
};
// int main()
// {
    // ys ptr;
    // ys* ptr=new ys;
    // (*ptr).md(6, 7);
    // (*ptr).rk();
     // ptr.md(5,7);
    // ptr.rk();
    // return 0;
// }
int main(){
    ys* sk=new ys;
    sk->md(3,6);
    sk->rk();
    ys* hp=new ys[3];
    return 0;
}