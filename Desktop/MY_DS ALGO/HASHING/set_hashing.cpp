#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++){
        s.insert(arr[i]);
    }

    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it;
    }

    cout<<endl;
     if(s.find(50)!=s.end())
    {
        cout<<"\n\n50 is present";
    }
    else
    {
        cout<<"\n\n50 is not present";
    }
}