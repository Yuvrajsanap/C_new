#include<iostream>
using namespace std;
class omnamshivsy{
    int a, b;
    public:
void ys(int c,int d){
a=c;
b=d;
}
void sk(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
};
int main(){
    omnamshivsy bole;            //-->simple
    bole.ys(8,9);
bole.sk();

omnamshivsy *bhole2 =new omnamshivsy;      //-->pointer to object
(*bhole2).ys(3,6);
(*bhole2).sk();

omnamshivsy *bhole=new omnamshivsy;
bhole->ys(8,9);                            //-->Arrow operator
bhole->sk();

omnamshivsy *bhole1=new omnamshivsy[4];      //-->Array of object.
bhole1->ys(84,5);
bhole1->sk();
return 0;
}