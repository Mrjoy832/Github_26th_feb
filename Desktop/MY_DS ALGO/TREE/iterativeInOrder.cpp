#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};


vector<int>InOrder(node*root){
    stack<node*>st;
    node*Node=root;
    vector<int>res;
    while(true){
        if(Node!=NULL){
            st.push(Node);
            Node=Node->left;
        }

        else{
            if(st.empty()==true) break;
            Node=st.top();
            st.pop();
            res.push_back(Node->data);
            Node=Node->right;

        }
    }
    return res;
 }


 int main(){
     struct  node*root;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->left->right->right=new node(7);

 vector<int>pre=InOrder(root);
 for(int i=0;i<pre.size();i++){
     cout<<pre[i]<<" ";
 }
 cout<<endl;
 }