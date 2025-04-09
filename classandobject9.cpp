#include<iostream>
using namespace std;
//  class sanap{
//     private :
//     int a,b,c;            //..........variable
//     public:
//     int d,e;
//     void yuvraj(int bro,int sis ,int dad);
//     void suraj(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//         cout<<d<<endl;
//         cout<<e<<endl;
//     }
//  };
//  void sanap::yuvraj(int bro,int sis,int dad)
//  {
//     a=bro;
//     b=sis;
//     c=dad;
//  }
//  int main()
//  {
//    sanap mom;                           //..objest
//    mom.d=83;
//    mom.e=34;
//    mom.yuvraj(3,5,6);
//    mom.suraj();
//    return 0;
//  }
class yuvi{
   private:
   int a,b,c;
   public:
   int d,e;
   void karan(int a1,int a2,int a3);
   void arjun(){
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;
      cout<<d<<endl;
      cout<<e<<endl;

   }
};
void yuvi::karan(int a1,int a2,int a3){
   a=a1;
   b=a2;
   c=a3;
}
int main(){
   yuvi srk;
   srk.d=54;
   srk.e=56;
   srk.karan(5,7,8);
   srk.arjun();
   return 0;
}