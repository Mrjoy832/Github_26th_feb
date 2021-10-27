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


int FloorInBst(node * root, int key){
    int floor=-1;
    while(root){
        if(root->data==key)
          {
              floor=root->data;
              return floor;
          }
        if(key>root->data){
            floor=root->data;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return floor;
}

int main(){
    struct node*p=new node(10);
    p->left=new node(5);
    p->right=new node(15);
    p->left->left=new node(2);
    p->left->right=new node(8);
    p->left->right->left=new node(6);

    cout<<FloorInBst(p,14);
}