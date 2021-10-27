#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m;
    m.insert({1,10});
    m.insert({2,20});
    m.insert({3,30});
    m.insert({4,40});
    m.insert({5,50});

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}