#include<bits/stdc++.h>
using namespace std;

void findTopo(int node, vector<int>adj[], vector<int>&vis, stack<int>&st){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            findTopo(it,adj,vis,st);
        }
    }
    st.push(node);
}

vector<int>topoSort(int N, vector<int>adj[]){
    stack<int>st;
    vector<int>vis(N,0);
    for(int i=0;i<N;i++){
        if(vis[i]==0){
            findTopo(i,adj,vis,st);
        }
    }

    vector<int>topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}



int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    vector<int>ans=topoSort(n,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}