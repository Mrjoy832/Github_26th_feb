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


int IterativeSearch(node* root,int key){
    while(root!=NULL && root->data !=key){
        root=key<root->data?root->left:root->right;
    }

    return root->data;
}

node* RecursiveSearch(node * t, int key){
    if(t==NULL) return NULL;
    if (key==t->data) return t;
    else if (key<t->data) return RecursiveSearch(t->left,key);
    else   return RecursiveSearch(t->right,key);
}

int main(){
    struct node* p=new node(8);
    p->left=new node(3);
    p->right=new node(10);
    p->right->right=new node(14);
    p->right->left=new node(13);
    p->left->left=new node(1);
    p->left->right=new node(6);
    p->left->right->left=new node(4);
    p->left->right->right=new node(7);

cout<<IterativeSearch(p,7)<<endl;
cout<<RecursiveSearch(p,13);
}