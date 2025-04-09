#include<iostream>
using namespace std;
int count=0;             //..>global variable
class sanap{
// object ke jarurat nahe hai ! tab distrcter us hota hai //constructer never tack arrgument and does not return any value.
    public:
    sanap(){                
count ++;
cout<<"this is callse constructer"<<count<<endl;      //..>constructer
    }
    ~sanap(){                                         //..>distruter
        count--;
        cout<<"this is called distructer"<<count<<endl;  
    }
};
int main(){
    cout<<"int main"<<endl;
    cout<<"creating n1 object"<<endl;
    sanap n1;
    {
        cout<<"in the block"<<endl;
        cout<<"creating the two more object"<<endl;
        sanap n2,n3;
        cout<<"exiting this blick"<<endl;
    }
    cout<<"back to the main"<<endl;
    return 0;
}

// int rolex=0;
// class yuvi{
//     public:
//     yuvi(){
//         rolex++;
//         cout<<"constructer"<<endl;
//     }
//     ~yuvi(){
//         rolex--;
//         cout<<"distructer"<<endl;
//     }
// };
// int main(){
//     cout<<"in the main"<<endl;
//     cout<<"first obj"<<endl;
//     yuvi n1;
//     {
//         cout<<"in the block"<<endl;
//         cout<<"two new obj"<<endl;
//         yuvi n2,n3;
//         cout<<"existing the block"<<endl;
//     }
//     cout<<"rolex is back"<<endl;
//     return 0;
// }