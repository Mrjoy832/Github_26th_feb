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

node* INSERTintoBST(node * root,int val){
    if(root==NULL) {
        return new node(val);
    }

    while(true){
        if(root->data<=val){
            if(root->right!=NULL)
            {
                root=root->right;
                }
            else{
                root->right=new node(val);
                break;
                }
          

        }

        else{
            if(root->left!=NULL){
                root=root->left;
                }
            else {
                root->left=new node(val);
                break;
                }
            
        }
    }
}


void InOrder(struct node *p){ //InOrder Traversal
   if(p==NULL)
   return ;

  
  InOrder(p->left);
    cout<< p->data;
  InOrder(p->right);
}


int main(){
    struct node*root=new node(4);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right=new node(7);
    cout<<"before insert 5 : ";
    InOrder(root);
    cout<<endl;
    INSERTintoBST(root,5);
    cout<<"after Inserting 5 : ";
    InOrder(root);
    cout<<endl;
}


