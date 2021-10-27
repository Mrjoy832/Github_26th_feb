#include<bits/stdc++.h>
using namespace std;

void NGE( int n,int arr[]){
    stack<int>st;
    st.push(arr[0]);
    for(int i=0 ; i<n;i++){
        if(st.empty()){
            st.push(arr[i]);
            continue;
        }
        while(!st.empty() and st.top()<arr[i])
        {
            cout<<st.top()<<"-->"<<arr[i]<<endl;
            st.pop();
        }
        st.push(arr[i]);
        while(st.empty()==false){
            cout<<st.top()<<"-->"<<-1;
            st.pop();
        }
    }
}



int main(){
    int Arr[]={13,7,6,12};
    NGE(5,Arr);
}