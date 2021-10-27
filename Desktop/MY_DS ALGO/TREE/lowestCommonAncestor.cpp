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


node* LCA(node * root,node* p,node* q){
    if(root==NULL || root==p || root==q){return root;}

    node* left=LCA(root->left,p,q);
    node* right=LCA(root->right,p,q);
    if(left==NULL){return right;}
    
    if(right==NULL){return left;}

    else 
    return root;

}


int main(){
    struct node*root=new node(1);
    root->left=new node(2);
   node*p= root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
   node*q= root->left->right->right=new node(7);
    root->right=new node(3);
    root->right->left=new node(8);
    root->right->right=new node(9);

node *res= LCA(root,p,q);
cout<<res->data;

}