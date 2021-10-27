#include<bits/stdc++.h>
using namespace std;
class Que{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int x){
        s1.push(x);
    }//o(1)
//costly pop()=o(n)
    int pop(){
        if(s1.empty() && s2.empty())
        cout<<" empty queue"<<endl;
    
        else{
    
           if(s2.empty()){
               while(!s1.empty()){
                   s2.push(s1.top());
                   s1.pop();
               }
           }
        }
        int top=s2.top();
    s2.pop();
    return  top;
    }
    
    bool empty(){
        if(s1.empty() && s2.empty())
        return true;
    return false;
    }

};

int main(){
    Que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(14);
    q.push(17);
    while(!q.empty()){
       cout<< q.pop()<<endl;
    }
}
    