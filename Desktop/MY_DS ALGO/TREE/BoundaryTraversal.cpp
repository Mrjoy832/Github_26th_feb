#include<bits/stdc++.h>
using namespace std;

struct  node
{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

bool isleaf(node *root){
    return !root->left&& !root->right;
}

void addLeftBoundary(node *root, vector<int>&ans){

    node*cur=root->left;
    while(cur){
        if(!isleaf(cur)){ ans.push_back(cur->data);}
        if(cur->left)  {cur=cur->left;}
        else {cur=cur->right;}
    }
}

void addRightBoundary(node *root, vector<int>&ans){
    node*cur=root->right;
    vector<int>temp;
    while (cur)
    {
       if(!isleaf(cur)) {temp.push_back(cur->data);}
       if(cur->right)   {cur=cur->right;}
       else {cur=cur->left;}
    }

    for(int i=temp.size()-1;i>=0;--i){
        ans.push_back(temp[i]);
    }
    
}

void addleaves(node*root, vector<int>&ans){
    if(isleaf(root)){
        ans.push_back(root->data);
        return;
    }
    if(root->left) {addleaves(root->left, ans);}
    if(root->right){ addleaves(root->right, ans);}
}


vector<int>printBoundary(node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    if(!isleaf(root)) ans.push_back(root->data);
    addLeftBoundary(root,ans);
    addleaves(root,ans);
    addRightBoundary(root,ans);

    return ans;
}




int main(){
     struct node*q; 
   
    q=new node(1);
    q->left=new node(2);
    q->right=new node(7);
    q->right->right=new node(8);
    q->right->right->right=new node(9);
    q->right->right->left=new node(10);
    q->right->right->right=new node(11);
    q->left->left=new node(3);
    q->left->left->left=new node(4);
    q->left->left->left=new node(5);
    q->left->left->right=new node(6);

   

   vector<int>v=printBoundary(q);
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;
}

