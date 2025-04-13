#include<iostream>
#include<map>
#include <string>
using namespace std;
// int main(){
//     map<string,int> mark;
//     mark["yuvraj"]=97;
//     mark["shubham"]=78;
//     mark["rohit"]=46;
//     mark["krushana"]=75;
// map<string,int>:: iterator zyan;
// for(zyan=mark.begin();zyan!=mark.end();zyan ++){
// cout<<(*zyan).first<<" "<<(*zyan).second<<"\n";
// }
// return 0;
// }
int main(){
map<string,int>subject;
subject["math"]=86;
subject["chemistry"]=67;
subject["biology"]=637;
subject["hidi"]=63;
subject["physices"]=87;
map<string,int>::iterator yuvi;
for(yuvi=subject.begin();yuvi!=subject.end();yuvi++){
    cout<<(*yuvi).first<<" "<<(*yuvi).second<<"\n";
}
return 0;
}
