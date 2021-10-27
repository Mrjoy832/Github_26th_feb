#include<bits/stdc++.h>
using namespace std;

int main(){
    //array Sorting using STL
    int Arr[]={5,6,2,4,3,1};
    cout<<"before sorting ARRAY: ";
    for(int i=0;i<(sizeof(Arr)/sizeof(Arr[0]));i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting ARRAY: ";
    sort(Arr, Arr+(sizeof(Arr)/sizeof(Arr[0])));
    for(int i=0;i<(sizeof(Arr)/sizeof(Arr[0]));i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

//Vector sorting by STL
vector<int>v;
v={5,8,7,6,1};
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.begin(), v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}