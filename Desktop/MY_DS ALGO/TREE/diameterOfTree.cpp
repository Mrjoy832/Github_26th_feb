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

int height(node *Node,int & diameter){
    if(Node==NULL) return 0;

    int lh=height(Node->left,diameter);
    int rh=height(Node->right,diameter);
    diameter=max(diameter, lh+rh);
    return 1 + max(lh,rh);
}

int DiameterOfTree(node * root){
    int diameter=0;
    height(root,diameter);
    return diameter;
}


int main(){
    struct node*root;
    root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    cout<<"diameter is "<<DiameterOfTree(root);
}