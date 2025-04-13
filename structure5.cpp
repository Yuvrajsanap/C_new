#include <iostream>
using namespace std;
struct student //.............structure is used for different data tupe in one data type
{
    int id;
    char name;
    float salary;
};
// int main()
// {
//     struct student yuvraj;
//     struct student shubham;
//     struct student aniket;
//     yuvraj.id = 88;
//     yuvraj.name = 'y';
//     yuvraj.salary = 700000;
//     cout << yuvraj.id << endl;
//     cout << yuvraj.name << endl;
//     cout << yuvraj.salary << endl;
//     return 0;
// }

//........union;it is used for one time only one data type is used
// union school
// {
//     int student;
//     char cnes;
//     float total;
// };
// int main()
// {
//     union school om;
//     om.student=450;
//     // om.cnes='C';
// cout<<om.student<<endl;
// // cout<<om.cnes<<endl;
// // cout<<om.total<<endl;
// }

//.........enum...>
int main()
{
    enum yuvi {om,sahil,nikhil};
    yuvi y=om;
    cout<<y;
};
