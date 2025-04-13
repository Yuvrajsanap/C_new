#include<iostream>
using namespace std;
// class yuvi
// {
//     int a,b;
//     public :
//     yuvi (int x,int y)
//     {
//         a=x;
//         b=y;
//     }
//     void dispaly();
// };
// void yuvi ::dispaly(){
//     cout<<"the value of a and b is "<<a<<","<<b<<endl;
// };
// int main()
// {
// yuvi p1(4,3);
// p1.dispaly();

// yuvi p2(5,2);
// p2.dispaly();
// };

class yuvi 
{
    int a,b;
    public :
    yuvi (int virat ,int rohit=6 ){
        a=virat;
        b=rohit;
    }
    void cr();
};
void yuvi ::cr(){
    cout<<a<<","<<b<<endl;
};
int main()
{
    yuvi p1(736,5);
    p1.cr();

    yuvi p2(56);
    p2.cr();

    return 0;

}