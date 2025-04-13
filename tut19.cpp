#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << "the value of a is " << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "the value of a,b and c is" << endl;
    return a + b + c;
}
int volume(double l, int r)
{
    return r * r * r;
}
int volume(int a)
{
    return a * a * a;
}

int main()
{
    cout << "the value of a and b is " << sum(3, 4) << endl;
    cout << "the value of a, b and c is " << sum(3, 4, 5) << endl;
    cout << "the value of l and r is " << volume(3, 4) << endl;
    cout << "the value of a is " << volume(3) << endl;

    return 0;
}