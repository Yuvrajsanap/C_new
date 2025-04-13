#include<iostream>
#include<string>
using namespace std;
class yuvraj{
    string s;
    public:
    void read(void);
    void cheak(void);
    void exchange(void);
    void display(void);
};
void yuvraj::read(void){            //how to difine funtion in class....>void ,cllass name ::function name(argumrnt)
    cout<<"the binnary no is"<<endl;
    cin>>s;
};
void yuvraj::cheak(void){
    // exchange ();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary no"<<endl;
            exit(0);
        }
    }
}
void yuvraj ::exchange(void){
    exchange();
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
void yuvraj::display(void){
    cout<<"the value is"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    yuvraj b;
    b.read();
b.cheak();
b.exchange();
b.display();
return 0;
}