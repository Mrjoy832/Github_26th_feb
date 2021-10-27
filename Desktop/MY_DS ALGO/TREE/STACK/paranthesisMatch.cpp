#include<bits/stdc++.h>
using namespace std;

bool isValid(string S){
    int n=S.size();
    stack<char>st;
    bool ans= true;
    for(int i=0;i<n;i++){
        if(S[i]=='(' or S[i]=='{' or S[i]=='[')
        {st.push(S[i]);}

        else if(S[i]==')')
        {
            if(st.top()=='(' and !st.empty()){
            st.pop();
            }
            else{ ans=false;
            break;
            }
        }
        else if(S[i]=='}')
        {
            if(st.top()=='{' and !st.empty()){
            st.pop();
            }
            else{ ans=false;
            break;}
        }
        else 
        {
            if(st.top()=='[' and !st.empty()){
                st.pop();
            }
            else {ans=false;
            break;
            }
        }
    }

    if(!st.empty()) {return false;}
    else {return true;}

}


int main(){
    string S= "{[()]}";
    cout<<isValid(S);
}