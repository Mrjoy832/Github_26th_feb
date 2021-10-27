#include<iostream>
using namespace std;

class Queue{
    private:

    int size;
    int front;
    int rear;
    int *Q;

    public:

    Queue(int size);
    bool isFull();
    bool isempty();
    void Enqueue(int x);
    int dequeue();
    void display();
};

Queue:: Queue(int size){
    this->size=size;
    front=-1;
    rear=-1;
    Q=new int[size];
}

bool Queue:: isempty(){
    if(front==rear){return true;}
    else {return false;}
}

bool Queue:: isFull(){
    if(rear==size-1){return true;}
    else{return false;}
}

void Queue:: Enqueue(int x){
    if(isFull()) {cout<<"overflow"<<endl;}
    else{
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue(){
    // int x=-1;
    if(isempty()){cout<<"overflow "<<endl;}
    else{
        front++;
    }
}


void Queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int A[]={1,3,5,7,9};
    Queue q(5);
    for(int i=0;i<5;i++){
        q.Enqueue(A[i]);
    }

    q.display();
}