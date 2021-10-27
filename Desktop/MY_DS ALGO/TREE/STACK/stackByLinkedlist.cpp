#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};
node*top=NULL;

void push(int x){
    struct node*t;
    t= new node;
    if(t==NULL){cout<<"overflow";}
  else
    {
      t->data=x;
      t->next=top;
      top=t;
    }
}


int pop(){
    node*t;
    if(top==NULL) {cout<<"empty";}
    else
    t=top;
    top=top->next;
    delete(t);
}


void display(){
    node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}



int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    display();
    
}