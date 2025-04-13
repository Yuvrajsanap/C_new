#include <iostream>
using namespace std;
class yuvi
{
    int virat;

public:
    int mahi;
    void data1();
    int data2();
    int data3();
};
void yuvi ::data1(void)
{
    virat = 76;
    mahi = 48;
}
int yuvi ::data2()
{
    return virat;
}
int yuvi ::data3()
{
    return mahi;
}
class ys : public yuvi
{
    int kl;

public:
    void petter();
    void spider();
};
void ys ::petter()
{
    kl = mahi * data2();
}
void ys ::spider()
{
    cout << "the value of data 1 is " << data2() << endl;
    cout << "the value of data 2 is" << mahi << endl;
    cout << "The valud of data 3 is" << kl << endl;
}
int main()
{
    ys harrypottr;
    harrypottr.data1();
    harrypottr.spider();
    harrypottr.petter();
    return 0;
}