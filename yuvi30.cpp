#include<iostream>
using namespace std;
class yuvi
{
    int x,y;
    public :
    yuvi (void);
void display()
{
    cout<<x<<"+"<<y<<endl;
}
};
yuvi ::yuvi(int a,int b)
{
    x=a;
    y=b;
};
int main()
{
yuvi ys(3,5);
ys.display();

yuvi y(6,4);
y.display();
return 0;
}