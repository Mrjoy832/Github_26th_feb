#include<bits/stdc++.h>
using namespace std;

struct  node
{
    int data;
    node*left;
   node*right;
   node(int val){
        data=val;
        left=right=NULL;
    }
};

bool getPath(node * root, vector<int> &arr, int x){
    if(!root){return false;}

    arr.push_back(root->data);
    if(root->data== x){return true;}

    if((getPath(root->left,arr,x))|| 
    getPath(root->right,arr,x))
    {return true;}

    arr.pop_back();
    return false;
}


vector<int>solve(node * A, int B){
    vector<int>arr;
    if(A==NULL)
    {return arr;}

    getPath(A,arr,B);
    return arr;
}


int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->left->right->right=new node(7);

    int x=7;

    vector<int>sol=solve(root, x);
    for(int i=0;i<sol.size();i++){
        cout<<sol[i]<<" ";
    }

}