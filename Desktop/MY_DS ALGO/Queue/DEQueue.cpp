#include<iostream>
using namespace std;

class dequeue{
int front;
int rear;
int size;
int *q;
public:
dequeue(int size){
    this->size=size;
    front=rear=-1;
    q=new int[size];
}

bool empty(){
    if(front==rear){
    return true;
    }
    else{
return false;
    }
}

bool full(){
    if(rear==size-1){
    return true;
    }
return false;
}

void enqueueFront(int x){
    if(front==-1){
        cout<<"overflow"<<endl;
    }
    else
    {
        q[front]=x;
        
        front--;
    }
}
void enqueueRear(int x){
    if(full()){
        cout<<"overflow"<<endl;
    }
    else{
        rear++;
        q[rear]=x;
    }
}

int dequeueFront(){
    if(empty()){
        cout<<"underflow"<<endl;
    }
    else{
        front++;
    }
}

int dequeueRear(){
    if(rear==-1){
        cout<<"underflow"<<endl;
    }
    else{
        rear--;
    }
}
void display(){
    for(int i=front+1;i<=rear;i++){
        cout<<q[i]<<" ";
    }
}
};

int main(){
    int A[]={1,2,5,4,7};
    dequeue dq(sizeof(A)/sizeof(A[0]));
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
dq.enqueueRear(A[i]);
    }
dq.display();
}