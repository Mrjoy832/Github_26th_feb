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



int maxDepth(node*root){
    if(root==NULL) return 0;

    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);

    return 1+max(lh,rh);
}

int main(){
    struct  node*root;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(7);
    root->left->left=new node(3);
    root->left->right=new node(4);
    root->left->right->left=new node(5);
    root->left->right->right=new node(6);
    cout<<"depth is "<<maxDepth(root);

}
