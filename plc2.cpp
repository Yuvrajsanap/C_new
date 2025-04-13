#include <iostream>
using namespace std;
// 1.local and global variable->function ke under vale local and funtion ke bahare vale global. But first priority local la asate;
// 2.for loop , while loop ,do while loop->do while loop me conditon false bhi ho bhi aak bar run hoti hai
// 3.array->collection of simmilar item which are stored in contiguous memory.
// 4. i.structure->is use define data type combining deferent datatype. ii.Enum. iii.union->similar to stucture nut they provide better memmory mamagment.
// 5.function, call by value  & referance.
// 6.recurtion
// 7.class->is use define data type[similar to the structure].consist of variable and is_function
// 8.static variable and function[no code]->start by default one
// 9.friend function
// 10.constructer->is a member function sanme name as class.public ke under lekhate hai.khud he run hota hai.
// 11.Inheritance
// 1.local and global;
//  int global=5;
//  void ys(){
//      int a;
//      cout<<global;
//  }
//  int main(){
//      int global=10;
//      global=1000;
//      int a=9;
//      bool nm=false;
//      cout<<nm;
//      // int b=4;
//      // cout<<"the value of a is "<<a<<"\nthe value of b is "<< b<<"\n";
//      ys();
//      cout<<global;
//  return 0;
//  }

//  ......3.array.......
// int main(){
//     int ys[4]={10,20,30,40};
// cout<<ys[0]<<endl;
// cout<<ys[1]<<endl;
// cout<<ys[2]<<endl;
// cout<<ys[3]<<endl;
//    also use for loop.
// for (int i = 0; i < 4; i++)
// {
//    cout<<"the value of array is "<<ys[i]<<endl;
// }
// using pointer in array.->addres store karne ke liye sirf array ka Name.
//     int *a=ys;
//     cout<<"the address is 1 "<<*a<<endl;
//     cout<<"the address is 2 "<<*(a+1)<<endl;
//     cout<<"the address is 3 "<<*(a+2)<<endl;
//     cout<<"the address is 4 "<<*(a+3)<<endl;
// }

// 4..Structure.....
// struct employe
// {
//     int a;
//     char favchar;
//     float marks;
// };
// int main(){
//     struct employe ys;
//     ys.a=2;
//     ys.favchar='y';
//     ys.marks=98.55;
//     cout<<ys.a<<endl;
// }

// 5.call by vlaue & referance
// void swap(int* x,int* y){
//     int temp ;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a=5,b=6;
//     swap(&a,&b);
//     cout<<"a is "<<a<<" b is "<<b<<endl;
//     return 0;
// }

// 6.recurtion->Factorial
// int factorial(int n){
//     if (n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter the no"<<endl;
//     cin>>a;
//     cout<<"the value of a is "<<a<<"is"<<factorial(a)<<endl;
//     return 0;
// }

// 8.class
// class Employe{
//     private :
//     int a,b, c;
//     public:
//     int d,e;
//     void setdata(int a,int b,int c);
//     void getdata(){
//     cout<<"the value of a is"<<a<<endl;
//     cout<<"the value of b is"<<b<<endl;
//     cout<<"the value of c is"<<c<<endl;
//     cout<<"the value of d is"<<d<<endl;
//     cout<<"the value of e is"<<e<<endl;
//     }
// };
// void Employe :: setdata(int a1,int b1,int c1){
//     a1=a;
//     b1=b;
//     c1=c;
// }
// int main(){
//     Employe yuvi;
//     yuvi.d=88;
//     yuvi.e=68;
//     yuvi.setdata(1,2,3);
//     yuvi.getdata();
//     return 0;
// }
// class student{
//     private :
//     int a,b,c;
//     public:
//     int d,e;
//     void setdata(int a,int b,int c);//function define
//     void getdata(){
//     cout<<"the value of a is"<<a<<endl;
//     cout<<"the value of a is"<<b<<endl;
//     cout<<"the value of a is"<<c<<endl;
//     cout<<"the value of a is"<<d<<endl;
//     cout<<"the value of a is"<<e<<endl;
//     }
// };
// void student :: setdata(int x,int y,int z){//function declare
//     a=x;
//     b=y;
//     c=z;
// }
// int main(){
//   student ys;
//   ys.d=8;
//   ys.e=9;
//   ys.setdata(2,5,6);
//   ys.getdata();
//     return 0;
// }
//...Example of shop in class.using array
// class shop{
//     int itemid[100];
//     int itemprice[100];
//     int counter;
//     public:
//     void intialcounter(void){counter=0;}
//     void setprice(void);
//     void displayprice(void);
// };
// void shop :: setprice(void){
//     cout<<"Enter the  id "<<counter<<endl;
//     cin>>itemid[counter];
//     cout<<"Enter the price "<<counter<<endl;
//     cin>>itemprice[counter];
//     counter++;
// }
// void shop::displayprice(void){
//     for (int i = 0; i < counter; i++)
//     {
//         cout<<"the id is"<<itemid[i]<<"the price"<<itemprice[i]<<endl;
//     }

// }
// int main(){
// shop ekant;
// ekant.intialcounter();
// ekant.setprice();
// ekant.displayprice();
//     return 0;
// }
// class hotel{
//     int veg[100];
//     int nonveg[100];
//     int menu;
//     public:
//     void initialprice(void){menu=0;}
//     void setprice(void);
//     void displayprice(void);
// };
// void hotel::setprice(void){
//     cout<<"Enter the veg "<<menu+1<<endl;
//     cin>>veg[menu];
//     cout<<"Enter the nonveg"<<endl;
//     cin>>nonveg[menu];
//     menu ++;
// }
// void hotel :: displayprice(void){
//     for (int i = 0; i < menu; i++)
//     {
//         cout<<" the veg is"<<veg[i]<<"the nonveg"<<nonveg[i]<<endl;
//     }

// }
// int main(){
//     hotel sanap;
//     sanap.initialprice();
//     sanap.setprice();
//     sanap.displayprice();
//     return 0;
// }

// .........Friend Function .........
// class ys{
//     int a,b;
//     public:
//     void setdata(int n,int m){
//         a=n;
//         b=m;
//     }
//     friend ys thomasshely(ys x,ys y);
//     void printdata(){
//         cout<<"the no is "<<a<<" + "<<b<<endl;
//     }
// };
// ys thomasshely(ys x,ys y){
//     ys z;
//     z.setdata((x.a+y.a),(x.b+y.b));
//     return z;
// }
// int main(){
//     ys a1,a2,a3;
//     a1.setdata(4,6);
//     a1.printdata();
//     a2.setdata(2,5);
//     a2.printdata();

//     a3=thomasshely(a1,a2);
//     a3.printdata();

//     return 0;
// }
// class sanap{
//     int a,b;
//     public:
//     friend sanap tomy(sanap x,sanap y);
//     void setdata(int a1,int a2){
//         a=a1;
//         b=a2;
//     }
//     void printdata(){
//         cout<<"the no is "<<a<<" + "<<b<<endl;
//     }
// };
// sanap tomy(sanap x,sanap y){
//     sanap z;
//     z.setdata((x.a+y.a),(x.b+y.b));
//     return z;
// }
// int main(){
// sanap p,l,m;
// p.setdata(2,9);
// p.printdata();

// l.setdata(2,4);
// l.printdata();

// m=tomy(p,l);
// m.printdata();
//     return 0;
// }

// 10._Construct
// class ys{
//     public:    //ALWAYS IN PUBLIC
//     int a,b;
//     ys(void);//CONSTRUCTER
//     void printvalue(){
//         cout<<"the value of a is "<<a<<"and"<<b<<endl;
//     }
// };
//  ys::ys(void){--Default constructer //DEFINE(initialize)
// a=2;
// b=7;
// }
// int main(){
//     ys x,y;
//     x.printvalue();
//     y.printvalue();
//     return 0;
// }..........
// class again
// {
//     int a, b;
// public:
//     again(int ,int);
//     void printvalue()
//     {
//         cout << "the value is" << a << "+" << b << endl;
//     }
// };
//     again ::again(int x,int y)-->parametrize constructer
//     {
//         a = x;
//         b = y;
//     }
//  int main()
// {
//     again m(5,6);
//     m.printvalue();
//     again n(6,8);
//     n.printvalue();
//     return 0;
// }..........
// class bhola{
//     int a,b;
//     public:
//     bhola(int,int);
//     void printvalue(){
//         cout<<"the value is "<<a<<"and"<<b<<endl;
//     }
// };
//     bhola::bhola(int x,int y){
//         a=x;
//         b=y;
//     }
//     int main(){
//         bhola a(5,6);
//         a.printvalue();

//         bhola b(88,66);
//         b.printvalue();
//         return 0;
//     }

// ...Inheritance
// 1.singal inheritance.->base clase se derived class inherited.
// class base{
//     int data1;
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };
// void base :: setdata(void){
//     data1=10;
//     data2=20;
// }
// int base :: getdata1(){
//     return data1;
// }
// int base :: getdata2(){
//     return data2;
// }
// class derived : public base{
//     int data3;
//     public:
//     void process();
//     void display();
// };
// void derived :: process(){
// data3=data2*getdata1();
// }
// void derived :: display(){
//     cout<<"the value of is"<<getdata1()<<endl;
//     cout<<"the value of is"<<data2<<endl;
//     cout<<"the value of is"<<data3<<endl;
// }
// int main(){
//     derived ys;
//     ys.setdata();
//     ys.process();
//     ys.display();
//     return 0;
// }
// Multilevel inheritance.....A->B->C............
// class student{
//     protected:
//     int roll_no;
//     public:
//     void set_roll_no(int);
//     void get_roll_no(void);
// };
// void student :: set_roll_no(int r){
//     roll_no=r;
// }
// void student :: get_roll_no(){
//     cout<<"the roll no is"<<roll_no<<endl;
// }
// class exam : public student{
//     protected:
//     float maths;
//     float physics;
//     public:
//     void set_marks(float,float);
//     void get_marks(void);
// };
// void exam ::set_marks(float a1, float a2){
//     maths=a1;
//     physics=a2;
// }
// void exam :: get_marks(){
//     cout<<"the marks is "<<maths<<endl;
//     cout<<"the marks is "<<physics<<endl;
// }
// class result : public exam{
//     float percentage;
//     public:
//     void display_result(){
//         get_roll_no();
//         get_marks();
//         cout<<"your result is "<<(maths+physics)/2<<endl;
//     }

// };
// int main(){
//     result ys;
//     ys.set_roll_no(14);
//     ys.set_marks(90.45,98.60);
//     ys.display_result();
//     return 0;
// }

// Multipul inheritance.A&B=C.................
class base1{
    protected :
    int x;
    public:
    void set_base1(int a){
        x=a;
    }
};
class base2{
    protected:
    int y;
    public:
    void set_base2(int b){
        y=b;
    }
};
class derived : public base1,public base2{
    public:
    void display(){
        cout<<"the value of a is "<<x<<endl;
        cout<<"the value of a is "<<y<<endl;
        cout<<"the value of a is "<<x+y<<endl;

    }
};
int main(){
    derived ys;
    ys.set_base1(2);
    ys.set_base2(3);
    ys.display();
    return 0;
}