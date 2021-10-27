#include<iostream>
using namespace std;
class circularqueue{
int size;
int front;
int rear;
int *q;
public:
circularqueue(int size){
    this->size=size;
    front=rear=0;
    q=new int[size];
}
bool empty(){
    if (front==rear){
    return true;
    }
    else{
return false;
}
}
bool full(){
    return ((rear+1)%size==front);
    
}
void enqueue(int x){
    if(full()){
    cout<<"overflow"<<endl;
    }
    else
    {
    rear=(rear+1)%size;
    q[rear]=x;
}
}
int dequeue(){
    if(empty()){
    cout<<"underflow"<<endl;
    }else{
    front=(front+1)%size;
}
}


void display(){
    int i=front+1;
    do{
        cout<<q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
}
};

int main(){
    int A[]={1,3,5,7,9};
    circularqueue cq(sizeof(A)/sizeof(A[0]));
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        cq.enqueue(A[i]);
    }

    cq.display();

}