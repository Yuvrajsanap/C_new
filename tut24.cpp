#include <iostream>
using namespace std;
class employe
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "the value is " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id is employe " << id << " and the employe" << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
int employe :: count;
int main()
{
    employe zayan, badsha ,kk ;
    zayan.setdata();
    zayan.getdata();
    employe ::getcount();
    badsha.setdata();
    badsha.getdata();
    employe ::getcount();

    kk.setdata();
    kk.getdata();
    employe ::getcount();

    return 0;
}