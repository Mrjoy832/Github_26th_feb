#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

node(int val){
    data=val;
    next=NULL;
}
};

void insertAtTell(node* &head, int val){
   node *n=new node(val);
   if(head==NULL){
       head=n;
       return;
   }

    
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


void display(node* head){
      node*temp=head;
      while (temp!=NULL)
      {
          cout<<temp->data<<"-> ";
          temp=temp->next;
      }
      
}

int countNodes(node*p){
    int counter=0;
    while(p!=0){
        counter++;
        p=p->next;
    }

   cout<< counter;

}

int sumAllElements(node*k){
    int sum=0;
    while(k!=NULL){
        sum=sum+k->data;
        k=k->next;
    }
  cout<< sum;
}

int maxElement(node*p){
    int m=INT_MIN;
    while(p!=0){
           if(p->data>m)
           m=p->data;
           p=p->next;
    }
    cout<<m;
}

bool SeacrhInLinkedList(node*head,int  key){
   node*p=head;
    while(p!=NULL){
        if(p->data==key){
            return true;
            p=p->next;
            
        }
    }
   return false;
    
}

void delByPos(node*p,int pos){
    node*q=NULL;
    for(int i=0;i<pos-1;i++){
          q=p;
          p=p->next;

    }
    q->next=p->next;
    delete p;
}

void reverseBySlidingWindow(node *head){
node *p=head;
node*q=NULL;
node *r=NULL;
while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
}
head=q;
}
void makeCycle(node *head, int pos){
    node*temp=head;
    node*startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}


bool cycle(node *head){
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if (fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node *head){
    node*slow=head;
    node*fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}




int main(){
    node*p=NULL;
    insertAtTell(p,1);
    insertAtTell(p,2);
    insertAtTell(p,3);
    insertAtTell(p,4);
    
//    countNodes(p);
//     cout<<endl;
//     sumAllElements(p);
//      cout<<endl;
//      maxElement(p);
//      cout<<endl;
//      cout<<SeacrhInLinkedList(p,1);
//      delByPos(p,3);
//      display(p);
    //  reverseBySlidingWindow(p);
    //  display(p);
    //  cout<<endl;
    //  cout<<cycle(p);
 makeCycle(p,3);
 removeCycle(p);
cout<<cycle(p);
}
