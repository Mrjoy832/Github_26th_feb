#include<bits/stdc++.h>
using namespace std;

vector<int>topoSort(int N, vector<int>adj[]){
    queue<int>q;
    vector<int>indegree(N,0);
    for(int i=0;i<N;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }

    for(int i=0;i<N;i++){
        if(indegree[i]==0)
        q.push(i);
    }

    vector<int>topo;

   while(!q.empty()){
       int node=q.front();
       q.pop();
       topo.push_back(node);
       for(auto it: adj[node]){
           indegree[it]--;
           if(indegree[it]==0)
           q.push(it);
       }
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
       

    }

    vector<int>ans=topoSort(n, adj);
    int size=ans.size();
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}