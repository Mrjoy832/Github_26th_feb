#include<iostream>
using namespace std;


void selection(int A[],int n){
    int j,k;
    for(int i=0;i<n-1;i++){
        for(j= k=i;j<n;j++){
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        int temp=A[i];
        A[i]=A[k];
        A[k]=temp;
    }
}

int main(){
    int arr[7]={7,4,5,6,2,1,3};
    selection(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}