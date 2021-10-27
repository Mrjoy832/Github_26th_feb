// The functions supported by std::queue are :
// empty() – Returns whether the queue is empty.
// size() – Returns the size of the queue.
// swap(): Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
// emplace(): Insert a new element into the queue container, the new element is added to the end of the queue.
// front() and back(): front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
// push(g) and pop(): The push() function adds the element ‘g’ at the end of the queue. The pop() function deletes the first element of the queue.


#include<iostream>
#include<queue>

using namespace std;

void show(queue<int>q)
{
     while(!q.empty()){
         cout<<q.front()<<" ";
         q.pop();
     }
}

int main(){
    queue<int>qe;
    qe.push(10);
    qe.push(20);
    qe.push(30);
    qe.push(40);
    show(qe);

    cout<<qe.size()<<endl;
    cout<<qe.front()<<endl;
    cout<<qe.back()<<endl;
    qe.pop();
    show(qe);
    cout<<qe.empty();
}