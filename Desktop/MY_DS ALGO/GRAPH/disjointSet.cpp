#include<bits/stdc++.h>
using namespace std;

int parent[7];
int Rank[7];

void makeset(){
    for(int i=1;i<=7;i++){
        parent[i]=i;
        Rank[i]=0;
        
        
    }
}

int findPar(int node){
   if(node==parent[node])
   {
       return node;
   }
   else{
       parent[node]=findPar(parent[node]);
   }
}

void Union(int u,int v){
    u=findPar(u);
    v=findPar(v);

    if(Rank[u]<Rank[v]){
        parent[v]=u;
    }
    else if
       ( Rank[u]>Rank[v])
       {
            parent[u]=v;
        }
    else{
        parent[v]=u;
       Rank[u]++;
    
    }
}



int main(){
    makeset();
    int m;
    cin>>m;
    while(m--){
        int u,v;
        Union(u,v);
    }

    if(findPar(2)!=findPar(3)){
        cout<<"from different component"<<endl;
    }
    else
    {
        cout<<"from same component"<<endl;
    }
}