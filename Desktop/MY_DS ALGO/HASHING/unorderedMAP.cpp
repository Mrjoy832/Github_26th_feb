#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char,int>u;
    u.insert({'a',1});
    u.insert({'b',2});
    u.insert({'c',3});
    u.insert({'d',4});
    u.insert({'e',5});
    for(auto it=u.begin();it!=u.end();it++){
        cout<<it->first<<" "<<it->second;
        cout<<endl;
    }
}