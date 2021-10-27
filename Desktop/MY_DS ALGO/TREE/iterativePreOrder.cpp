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

vector<int>PreOrder(node *root){
    vector<int>pre_result;
    if(root==NULL)
      return pre_result;

    stack<node*>st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        pre_result.push_back(root->data);
        if(root->right!=NULL)
          st.push(root->right);
        if(root->left!=NULL)
          st.push(root->left);
    }
    return pre_result;
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

 vector<int>pre=PreOrder(root);
 for(int i=0;i<pre.size();i++){
     cout<<pre[i]<<" ";
 }
 cout<<endl;


}