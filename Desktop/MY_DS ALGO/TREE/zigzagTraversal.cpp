#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};


vector<vector<int>> zigzag(node * root){
    vector<vector<int>>result;
    if(root==NULL) return result;

    queue<node*>que;
    que.push(root);
    bool flag=true;
    while(!que.empty()){
        int size=que.size();
        vector<int>row(size);
        for(int i=0;i<size;i++){
            node* Node=que.front();
            que.pop();
            int index=(flag)? i: (size-1-i);
            row[index]=Node->data;
            if(Node->left) {que.push(Node->left);}
            if(Node->right) {que.push(Node->right);}

        }
        flag=!flag;
        result.push_back(row);
    }
    return result;
}


int main(){
   struct node*q; 
   
    q=new node(1);
    q->left=new node(2);
    q->right=new node(7);
    q->left->left=new node(3);
    q->left->right=new node(4);
    q->left->right->left=new node(5);
    q->left->right->right=new node(6);

    vector<vector<int>>zig=zigzag(q);
    for(int i=0;i<zig.size();i++){
        for(int j=0;j<zig[i].size();j++){
            cout<<zig[i][j]<<" ";
        }
        cout<<endl;
    }
}