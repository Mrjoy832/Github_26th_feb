#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={16,3,14,19,17};
    make_heap(v1.begin(),v1.end());
    cout<<is_heap(v1.begin(),v1.end())<<endl;
    for(auto it=v1.begin();it!=is_heap_until(v1.begin(),v1.end());it++){
        cout<<*it<<" - ";
    }
    cout<<endl;
  

    cout<<"Max element of heap is : "<<v1.front();
    v1.push_back(100);
    push_heap(v1.begin(),v1.end());
    cout<<"Max element of heap is : "<<v1.front();
    pop_heap(v1.begin(),v1.end());
    cout<<"Max element of heap is : "<<v1.front();

//display
    for (int x:v1){
        cout<<x<<" ";
    }
sort_heap(v1.begin(),v1.end());
cout<<endl;
//display after sort
for (int x:v1){
        cout<<x<<" ";
    }

}
