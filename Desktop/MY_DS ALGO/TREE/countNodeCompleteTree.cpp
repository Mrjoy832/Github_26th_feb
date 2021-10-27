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

int findLeftHeight(node * Node){
    int h=0;
    while(Node){
        h++;
        Node=Node->left;
    }
    return h;
}

int findRightHeight(node * Node){
    int h=0;
    while(Node){
        h++;
        Node=Node->right;
    }
    return h;
}

int countNode(node * root){
    if(root==NULL){return 0;}
    int lh=findLeftHeight(root);
    int rh=findRightHeight(root);

    if(lh==rh){
        return (1<<lh)-1;
    }
    return 1+countNode(root->left)+countNode(root->right);
}





int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->left=new node(8);
    root->left->left->right=new node(9);
    root->left->right=new node(5);
    root->left->right->left=new node(10);
    root->left->right->right=new node(11);
    root->right=new node(3);
    root->right->right=new node(7);
    root->right->left=new node(6);

    cout<<countNode(root);

}