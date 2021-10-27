#include<iostream>
using namespace std;
struct node //tree declaration
{
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

void PreOrder(struct node *p){ //preOrdeer Traversal
   if(p==NULL)
   return ;

   cout<< p->data;
   PreOrder(p->left);
   PreOrder(p->right);
}
void PostOrder(struct node *p){ //PostOrder Traversal
   if(p==NULL)
   return ;

  
   PostOrder(p->left);
   PostOrder(p->right);
    cout<< p->data;
}
void InOrder(struct node *p){ //InOrder Traversal
   if(p==NULL)
   return ;

  
  InOrder(p->left);
    cout<< p->data;
  InOrder(p->right);
}

int main(){
    struct  node*root;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->left=new node(4);
    //    1
    //   / \
    //  2   3
  //       /
  //      4
    
    PreOrder(root);
    cout<<endl;
    InOrder(root);
    cout<<endl;
    PostOrder(root);
}
