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


int findCeil(node * root,int key){
    int ceil=-1;
    while(root){
        if(root->data==key){
          ceil=root->data;
          return ceil;
        }

        if(key>root->data){
          root=root->right;
        }
        else{
          ceil=root->data;
          root=root->left;
        }
    }

    return ceil;
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

    cout<<findCeil(p,9);
}