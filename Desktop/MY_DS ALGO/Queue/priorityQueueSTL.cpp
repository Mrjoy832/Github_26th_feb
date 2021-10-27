#include<iostream>
#include<queue>
using namespace std;
void showPq(priority_queue<int>pq){
    while(!pq.empty()){
        cout<<pq.top()<<"->"<<" ";
        pq.pop();
    }

}

int main(){
    priority_queue<int>q;
    q.push(10);
    q.push(20);
    q.push(0);
    q.push(100);
    showPq(q);
    cout<<q.top()<<endl;
    cout<<q.size();

}