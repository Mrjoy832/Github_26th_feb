#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
            }
};

void ReOrder(node * root){
    if(root==NULL){return;}
    int child=0;
    if(root->left){child+=root->left->data;}
    if(root->right){child+=root->right->data;}

    if(child>=root->data){root->data=child;}
    else{
        if(root->left){root->left->data= root->data;}
        else if(root->right){root->right->data= root->data;}

    }


    ReOrder(root->left);
    ReOrder(root->right);

    int tot=0;
    if(root->left) {tot+=root->left->data;}
    if(root->right){tot+=root->right->data;}
    if(root->left or  root->right){root->data=tot;}
}



// void InOrder(struct node *p){ //InOrder Traversal
//    if(p==NULL)
//    return ;

  
//   InOrder(p->left);
//     cout<< p->data;
//   InOrder(p->right);
// }
vector<vector<int>> zigzag(node * root){
    vector<vector<int>>result;
    if(root==NULL) return result;

    queue<node*>que;
    que.push(root);
    bool flag=true;
    while(!que.empty()){
        int size=que.size();
        vector<int>row(size);
        for(int i=0;i<size;i++){
            node* Node=que.front();
            que.pop();
            int index=(flag)? i: (size-1-i);
            row[index]=Node->data;
            if(Node->left) {que.push(Node->left);}
            if(Node->right) {que.push(Node->right);}

        }
        flag=!flag;
        result.push_back(row);
    }
    return result;
}


int main(){
    struct node*root=new node(40);
    root->left=new node(10);
    root->left->left=new node(2);
    root->left->right=new node(5);
    root->right=new node(20);
    root->right->right=new node(40);
    root->right->left=new node(30);

    ReOrder(root);

    vector<vector<int>>zig=zigzag(root);
     for(int i=0;i<zig.size();i++){
        for(int j=0;j<zig[i].size();j++){
            cout<<zig[i][j]<<" ";
        }
        cout<<endl;
    }
}