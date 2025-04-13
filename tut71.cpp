#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<"";
    }
    cout<<endl;
}
int main(){
    vector<int>vec1;
    int element,size;
    cout<<"Enter the size of vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"the value of thes function "<<endl;
        cin>>element;
vec1.push_back(element);
    }
    display(vec1);
    // vec1.pop_back();//pop_back in vector is uesd to delet the last element of output
    // display(vec1);

    // vector<int>:: iterator iter=vec1.begin();//this is iterator for begin is used to add the no.
    // vec1.insert(iter,2);
    // display(vec1);
    
    // vector<int>vec1;
    // vector<char>vec1(3);
    // vector<char>vec1(5);
    // vector<int>vec1(4,3);
    return 0;
}