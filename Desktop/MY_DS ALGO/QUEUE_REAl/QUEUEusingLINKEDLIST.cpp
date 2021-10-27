#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

class Queue{
    node*front;
    node*rear;
    public:
    Queue(){
        front=rear=NULL;
    }

    void Enqueue(int x);
    void Dequeue();
    int peek();
    void display();
};

void Queue:: Enqueue(int x){
    node*t= new node;
    if(t==NULL){cout<<"full"<<endl;}
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){front=rear=t;}
        else{
            rear->next=t;
            rear=t;
        }
    }
}


void Queue::Dequeue(){
   node*p;
   if(front==NULL){cout<<"empty"<<endl;}
   else{
       p=front;
       front=front->next;
       delete p;
   }
}

int Queue:: peek(){
    if(front==NULL){cout<<"empty "<<endl;}
    else{
       cout<< front->data;
    }
}

void Queue:: display(){
    node*p=front;
    while(p){
        cout<<p->data<<" -> ";
        p=p->next;
    }
}


int main(){
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    q.display();
    cout<<endl;
    q.peek();
}