#include<bits/stdc++.h>
using namespace std;

int Prefix(string S){
    stack<int>st;
    for(int i=S.size()-1;i>=0;i-- ){
        if(S[i]>='0' and S[i]<='9'){
            st.push(S[i]-'0');
        }
        else{
        int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
        


        switch (S[i])
        {
       case '+':
            st.push(op1 + op2);
            break;
       case '-':
            st.push(op1 - op2);
            break;
       case '*':
            st.push(op1 * op2);
            break;
       case '/':
            st.push(op1 / op2);
            break;
        }
        }
    }
    return st.top();
}

int main(){
    string s="-+7*45+20";
    cout<<Prefix(s);
}