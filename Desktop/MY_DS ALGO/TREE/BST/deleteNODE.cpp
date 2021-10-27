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

node*findLastRight(node *root){
    if(root->right==NULL){return root;}
    else
    {
        return findLastRight(root->right);
    }
}

node* helper(node* root){
    if(root->left==NULL){return root->right;}
    else if(root->right==NULL){return root->left;}

    node* rightChild=root->right;
    node* lastright=findLastRight(root->left);
    lastright->right=rightChild;
    return root->left;

}


node *DeleteNode(node*root, int key){
   if(root==NULL){return NULL;}
   if(root->data==key){return helper(root);}
   node*dummy=root;
   while(root!=NULL){
       if(root->data>key){
           if(root->left!=NULL && root->left->data==key){
               root->left=helper(root->left);
               break;
           }
           else{
               root=root->left;
           }
       }

       else{
           if(root->right!=NULL && root->right->data==key){
               root->right=helper(root->right);
               break;
           }
           else{
               root=root->right;
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
    struct node*root=new node(5);
    root->left=new node(3);
    root->left->left=new node(2);
    root->left->right=new node(4);
    root->left=new node(3);
    root->right=new node(6);
    root->right->right=new node(7);
    InOrder(root);


    cout<<endl;
    cout<<"after deletion :"<<endl;

    DeleteNode(root,3);

   InOrder(root);
    
}