#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
//     ofstream yuvi;
// yuvi.open("aug.ct");
// yuvi<<"hy good morning\n";
// yuvi<<"house of the dragone";
// yuvi.close();
// return 0;
// }
// ifstream ys;
// string yz;
// ys.open("aug.ct");
// // ys>>yz>> sammy;
// // cout<<yz <<sammy;
// while(ys.eof()==0){
// getline(ys,yz);
// cout<<yz<<endl;
// }
// ys.close();
// return 0;
// }

// ofstream yuvi;
// yuvi.open("aug.ct");
// yuvi<<"hallo my world";
// yuvi.close();
// return 0;
// }

ifstream zyan;
string malik;
zyan.open("aug.ct");
// zyan>>malik;
// cout<<malik;
while (zyan.eof()==0)
{
    getline(zyan,malik);
    cout<<malik;
}

zyan.close();
}