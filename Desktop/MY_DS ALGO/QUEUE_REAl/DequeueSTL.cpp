#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(20);
    dq.pop_back();
    dq.pop_front();

    for(auto it:dq){
        cout<<it<<" ";
    }


}