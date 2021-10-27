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

vector<int>postOrder(node*root){
    vector<int>ans;
    if(root==NULL) return ans;

stack<node*>st1,st2;
st1.push(root);
while(!st1.empty()){
    root=st1.top();
    st1.pop();
    if(root->left!=NULL)
      st1.push(root->left);
    if(root->right!=NULL)
      st1.push(root->right);
}

while(!st2.empty()){
    ans.push_back(st2.top()->data);
    st2.pop();
}

return ans;

}


int main(){
     struct  node*root;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->left->right=new node(7);
   root->right->left->right->right=new node(8);

vector<int>pre=postOrder(root);
 for(int i=0;i<pre.size();i++){
     cout<<pre[i]<<" ";
 }
 cout<<endl;
}