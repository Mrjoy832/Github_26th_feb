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


bool isSame(node *p,node*q){
    if(p==NULL || q==NULL)
      return(p==q);

      return (p->data==q->data)&& isSame(p->left,q->left)&&isSame(p->right,q->right);
}

int main(){
    struct  node*p,*q;
    p=new node(1);
    p->left=new node(2);
    p->right=new node(7);
    p->left->left=new node(3);
    p->left->right=new node(4);
    p->left->right->left=new node(5);
    p->left->right->right=new node(6);

    q=new node(1);
    q->left=new node(2);
    q->right=new node(7);
    q->left->left=new node(3);
    q->left->right=new node(4);
    q->left->right->left=new node(5);
    q->left->right->right=new node(6);


    cout<<isSame(p,q);
}