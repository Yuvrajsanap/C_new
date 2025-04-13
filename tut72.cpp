#include<iostream>
#include<list>
using namespace std;
void display(list<int> &yuvi){
    list<int> ::iterator it;
for ( it =yuvi.begin(); it !=yuvi.end(); it++)
{
    cout<<*it<<"";
}
}
int main(){
    // list<int>list1;  //empty list of 0 lenght
    // list1.push_back(3);
    // list1.push_back(5);
    // list1.push_back(7);
    // list1.push_back(8);
    // display(list1);

    // list<int>list2(4); 
    // list<int>::iterator it=list2.begin();  //empty list of length
    // *it=34;
    // it++;
    // *it=64;
    // it++;
    // *it=9;
    // it++;
    // display(list2);


    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);

    list<int>list1;
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(90);
    list1.push_back(65);
list1.push_back(54);

// list1.remove(54);

display(list1);
list1.sort();  //sort() is used to write sekvence order
display(list1);
    return 0;

}