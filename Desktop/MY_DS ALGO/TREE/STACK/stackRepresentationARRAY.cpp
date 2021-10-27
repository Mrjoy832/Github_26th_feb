#include<iostream>
using namespace std;

#define n 100

class stack{
    int *arr;
    int top;
    public:

    stack(){
        arr= new int[n];
        top=-1;

    }

    void push(int x){
        if (top==n-1) {cout<<"overflow";
        return;}
        top++;
        arr[top]=x;

    }


    void pop(){
        if(top==-1) {cout<<"underflow";
        return;}

        top--;
    }


    int Top(){
        if(top==-1) {cout<<"empty";
        return -1;}

        return arr[top];
    }

    bool empty(){
        if(top==-1) {return true;}

        return false;
    }
};



int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.Top();
    st.pop();
     cout<<st.Top();
}