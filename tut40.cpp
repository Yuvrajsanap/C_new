#include<iostream>
using namespace std;
class yuvi
{
    protected :
    int virat;
    public :
    void mahi(int);
    void rohit(void);
};
void yuvi::mahi(int a)
{
    virat=a;
}
void yuvi::rohit()
{
    cout<<"the total rohit cechury is "<<virat<<endl;
}
class ys:public yuvi
{
    protected :
    float zayn;
    float petter;
    public:
    void kl(float,float);
    void dk(void);
};
void ys::kl(float a1,float a2)
{
    zayn=a1;
    petter=a2;
}
void ys ::dk()
{
    cout<<"the age of zayn is"<<zayn<<endl;
    cout<<"the age of petter is "<<petter<<endl;
}
class yz:public ys
{
float age_persentage;
public:
void sky()
{
    rohit();
    dk();
    cout<<"the persentage is "<<(zayn+petter)/2<<endl;
} 
};
int main()
{
    yz m;
    m.kl(92.34,83.34);
    m.mahi(89);
m.sky();
return 0;
}
