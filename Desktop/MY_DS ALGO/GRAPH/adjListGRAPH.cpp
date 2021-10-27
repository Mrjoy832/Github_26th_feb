#include<bits/stdc++.h>
using namespace std;

void DFS(int node,vector<int>vis, vector<int>adj[],vector<int>storeDfs){
    storeDfs.push_back(node);
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it])
        DFS(it,vis,adj,storeDfs);
    }
}
vector<int>dfsOFGraph(int v,vector<int>adj[]){
    vector<int>storeDfs;
vector<int>vis(v+1,0);
for(int i=1;i<=v;i++){
    if(!vis[i])
    DFS(i,vis,adj,storeDfs);
}
return storeDfs;
}


int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int>adj[n+1];
    cout<<"enter node";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // for directed graph dont use this line
    }
    vector<int>ans=dfsOFGraph(n,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}


// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int V, E;
//     	cin >> V >> E;

//     	vector<int> adj[V];

//     	for(int i = 0; i < E; i++)
//     	{
//     		int u, v;
//     		cin >> u >> v;
//     		adj[u].push_back(v);
//     		adj[v].push_back(u);
//     	}
//         // string s1;
//         // cin>>s1;
     
//         vector<int>ans=dfsOFGraph(V, adj);
//         for(int i=0;i<ans.size();i++){
//         	cout<<ans[i]<<" ";
//         }
//         cout<<endl;
// 	}
// 	return 0;
// }  