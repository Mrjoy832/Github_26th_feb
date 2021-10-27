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

int height(node*root){
    if(root==NULL) return 0;

    int lh=height(root->left);
    if(lh==-1) return -1;

    int rh=height(root->right);
    if(rh==-1) return -1;

    if(abs(lh-rh)>1) return -1;
    return max(lh,rh)+1;
}



bool isBalanced(node *root){
    return height(root) !=-1;
}



int main(){
    struct  node*root;
    // root=new node(1);
    // root->left=new node(2);
    // root->right=new node(7);
    // root->left->left=new node(3);
    // root->left->right=new node(4);
    // root->left->right->left=new node(5);
    // root->left->right->right=new node(6);

    root=new node(1);
    root->left=new node(2);
    root->right=new node(7);
    root->left->left=new node(3);
    root->left->right=new node(4);

    cout<<isBalanced(root);
}