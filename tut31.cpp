#include <iostream>
using namespace std;
class yuvi
{
    int a, b;

public:
    yuvi(int x, int y)
    {
        a = x;
        b = y;
    }
    yuvi(int x)
    {
        a = x;
        b = 0;
    }
    yuvi()
    {
        a = 0;
        b = 0;
    }
    void yz()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int main()
{
    yuvi p(4,5);
    p.yz();

    yuvi p2(4);
    p2.yz();

    yuvi p3;
    p3.yz();
}