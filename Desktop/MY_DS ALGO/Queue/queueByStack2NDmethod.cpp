#include<bits/stdc++.h>
using namespace std;
class Que{
    stack<int>s1;
    
    public:
    void push(int x){
        s1.push(x);
    }

int pop(){
    int item;
    if(s1.empty()){
        cout<<"empty"<<endl;
        return -1;
    }
    int x=s1.top();
    s1.pop();
    if(s1.empty())
    return x;
    else
    item=pop();
    s1.push(x);
    return item;
}

};

int main(){
Que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(14);
    q.push(17);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}