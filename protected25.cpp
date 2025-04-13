#include<iostream>
using namespace std;
class sanap{
    protected:          //..>protected is simmilar to the  private but is it inherited.
    int y1;
    private:
    int y2;
};
class yuvi:protected sanap{

};
int main(){
    sanap x;
    yuvi y;
    // cout<<x.y2;       //..>is not work since protected in both base and derived calss.
    return 0;
}