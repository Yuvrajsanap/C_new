#include<iostream>
using namespace std;
void ys(int row){
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter the no"<<endl;
    cin>>row;
    ys(row);
    return 0;
}