#include <iostream>
using namespace std;
class simple_calculator
{
        public:
    int a,b;
public:
    void kinglanding(int , int )
    {
        cout << a + b << endl;
        cout << a - b << endl;
        cout << a * b << endl;
        cout << a / b << endl;
    }
};
class scientefic_calculator
{
    public:
    int c,d;
public:
    void winterfell(int , int )
    {
        cout << c++ << endl;
        cout << d-- + 2 << endl;
    }
};
class yuvi:public simple_calculator,public scientefic_calculator
{
    public:
    void hyy(){
cout << a + b << endl;
        cout << a - b << endl;
        cout << a * b << endl;
        cout << a / b << endl;
        cout << c++ << endl;
        cout << d-- + 2 << endl;
}
};
int main()
{
 yuvi zyan;
 zyan.kinglanding(2,3);
 zyan.winterfell(6,4);
 zyan.hyy();
}