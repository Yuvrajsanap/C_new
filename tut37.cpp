#include <iostream>
using namespace std;
class yuvi
{
public:
    int a;
    float price;
    yuvi(int c)
    {
        a = c;
        price = 43.5;
    }
    yuvi() {}
};
class yz : public yuvi
{
public:
    int virat;
    yz(int harrypotter)
    {
        a = harrypotter;
        virat = 89;
        // void format(){
        //     cout<<a<<endl;
        }
    };
    int main()
    {
        yuvi msd(1), bumrah(2);
        cout << msd.price << endl;
        cout << bumrah.price << endl;
        yz sky(9);
        cout << sky.price << endl;
        cout << sky.a<< endl;
        // sky.format();
        return 0;
    }