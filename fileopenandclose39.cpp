#include<iostream>
#include<fstream>
using namespace std;
int main()
// {
//     ofstream out;         //..>using out object.
//     out.open("size.c");      //..>open the file
//     out<<"the name is\n";//..>writing the file
//     out<<"my name is";
//     out.close();//..>close the file
//     return 0;
// }

// {
//     ifstream in;
//     string ys;
//     in.open("size.c");
//     while (in.eof()==0)      //..>eof->end of file.
//     {
//         getline(in,ys);
//         cout<<ys<<endl;
//     }
    
//     return 0;
// }
{
    ifstream in;
    string ys;
    in.open("size.c");
    while (in.eof()==0)
    {
        getline(in,ys);
        cout<<ys<<endl;
    }
    return 0;
}