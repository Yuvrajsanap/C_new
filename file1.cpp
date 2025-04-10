#include<iostream>

using namespace std;

int main(){
    char name[100];
    FILE *ptr=NULL;
    ptr=fopen("Yuvaraj.txt","r");
    fgets(name,40,ptr);
    cout<<"The text = ";
    puts(name);

    return 0;
}