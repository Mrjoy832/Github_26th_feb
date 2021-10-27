#include<bits/stdc++.h>
using namespace std;

void DFS(int node, vector<int>&vis, vector<int>adj[],vector<int>&store){
    store.push_back(node);
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            DFS(node,vis,adj,store);
        }
    }
}


vector<int>dfsOfGraph(int v, vector<int>adj[]){
    vector<int>store;
    vector<int>vis(v+1,0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            DFS(i,vis,adj,store);
        }
    }
    return store;

}


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        
        vector<int>ans=dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  