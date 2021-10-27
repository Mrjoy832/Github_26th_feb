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
    //sort 
    sort(Arr, Arr+(sizeof(Arr)/sizeof(Arr[0])),  greater<int>());


    for(int i=0;i<(sizeof(Arr)/sizeof(Arr[0]));i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}