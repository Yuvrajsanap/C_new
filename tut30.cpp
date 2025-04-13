#include <iostream>
using namespace std;
class yuvi
{
    int x, y;

public:
    yuvi(int, int);
    void sk()
    {
        cout << x << "+" << y <<"i"<< endl;
    }
};
yuvi :: yuvi(int a,int b){
    x=a;
    y=b;
}
int main()
{
    yuvi po(83,3);
    po.sk();
    return 0;
}
