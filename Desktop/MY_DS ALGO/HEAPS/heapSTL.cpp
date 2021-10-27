#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>> q;  //for max heap
    q.push(1);
    q.push(10);
    q.push(100);
    q.push(1000);
    cout<<q.top()<<endl;
 q.pop();
    cout<<q.top()<<endl;




  priority_queue<int,vector<int>,greater<int>> qm;
//for min heap
  qm.push(1);  
  qm.push(10);  
  qm.push(12);  
  qm.push(100);
  cout<<qm.top(); 

  cout<<endl;
  cout<<qm.size(); 
    

}