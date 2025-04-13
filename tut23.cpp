#include<iostream>
#include<string>
using namespace std;
class binary
{   string s;
    public :
    void cheak_bin(void);
    void read(void);
    void once_compliment(void);
    void display(void);
};
void binary :: read(void)
{
    cout<<"the binary number is"<<endl;
    cin>> s;
}
void binary :: cheak_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary :: once_compliment(void)
{
    cheak_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)==1;
        }
        else
        {
            s.at(i)=='0';
        }
    }
    
}
void binary ::display(void)
{
    cout<<"display binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
    cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.once_compliment();
    b.display();
    return 0;
}