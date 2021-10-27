#include<bits/stdc++.h>
using namespace std;


void BFSshortest(vector<int>adj[], int N, int src){
    int dis[N];
    
    //memset(dis, INT_MAX, sizeof dis);
    for(int i = 0;i<N;i++) dis[i] = INT_MAX; 
	
    queue<int>q;
    dis[src]=0;
    q.push(src);

    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it: adj[node]){
            if(dis[node]+1<dis[it])
            {
                dis[it]=dis[node]+1;
                q.push(it);
            }
        }
    }

    for(int i=0;i<N;i++){
        cout<<dis[i]<<" ";
    }
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

    

    BFSshortest(adj,n,0);

}