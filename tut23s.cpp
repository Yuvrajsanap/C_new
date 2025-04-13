#include<iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemPrice[120];
    int counter;
    public :
    void initcounter(void) {counter=0;}
    void setprice(void);
    void displayprice(void);
};
void shop :: setprice(void)
{
    cout<<"enter the item no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"entrer the price "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the item id and price is "<<itemid[i]<<"is"<<itemPrice[i]<<endl;
    }
    
}
int main()
{   shop bhole;
bhole.initcounter();
bhole.setprice();
bhole.setprice();
bhole.setprice();
bhole.setprice();
bhole.displayprice();
    return 0;
}