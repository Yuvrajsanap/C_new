#include<iostream>
using namespace std;
//uses of struct and typedef
// typedef struct yuvi
// {
//     int name;
//     char favchar;
//     float age;
// }ys;
// int main(){
// ys snap;
// snap.name=6;
// snap.favchar='s';
// snap.age=19;
// cout<<snap.name<<endl;
// cout<<snap.age<<endl;
// cout<<snap.favchar<<endl;

//uses of union
// union rohit
// {
//     int runs;
//     char favchar;
//     float ipl;
// };
// int main()
// {
//     union rohit hitman;
//     hitman.runs=73000;
//     hitman.favchar='h';
    // hitman.ipl=6483;
//     cout<<hitman.runs;
// }

int main(){
enum yuvi{morning,afternun,night};
yuvi sa=morning;
cout<<sa;
yuvi da=afternun;
cout<<da;
yuvi pa=night;
cout<<pa;
// cout<<morning;
// cout<<afternun;
// cout<<night;
}