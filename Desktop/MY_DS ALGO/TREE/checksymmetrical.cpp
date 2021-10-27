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


bool check(node* left, node*right){
    if(left==NULL || right==NULL)
    return left==right;

    if(left->data!=right->data) return false;
    return check(left->left , right->right)&& check(left->right , right->left);
}


bool isSymmetric(node* root){
    

  
    return root==NULL || check(root->left,root->right);
}




int main(){
    struct  node* root=new node(1);
    node* left;
    node*right;
    root->left=new node(2);
    root->right=new node(2);
    root->right->left=new node(4);
    root->right->right=new node(3);
    root->left->left=new node(3);
    root->left->right=new node(4);

    cout<<check(left, right);
    
    
}