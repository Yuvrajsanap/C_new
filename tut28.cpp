#include<iostream>
using namespace std;
// class y;
// class x{
//     int data;
//     public :
//     void setvalue(int value){
//         data=value;
//     }
//     friend void add(x,y);
// };
// class y{
//     int num;
//     public :
//     void setvalue(int value){
//         num =value;
//     }
//     friend void add(x,y);
// };
// void add(x o1,y o2){
// cout <<"the value after add :"<<o1.data+o2.num;
// }
// int main()
// {  
//     x a1;
//     a1.setvalue(5);

//     y b1;
//     b1.setvalue(6);

//     add(a1,b1);
//     return 0;
// }
class virat;
class rohit {
    int value;
    public :
    void setdata(int data){
 value=data;
    }
    friend void add(rohit,virat);
};
class virat{
    int num;
    public :
    void setdata(int data){
        num=data;
    }
    friend void add(rohit,virat);
};
void add(rohit o1,virat o2)
{
    cout<<"the sum after adding is :"<<o1.value+o2.num;
};
int main()
{
    rohit a1;
    a1.setdata(22);

   virat b1;
    b1.setdata(43);

    add(a1,b1);
return 0;
}