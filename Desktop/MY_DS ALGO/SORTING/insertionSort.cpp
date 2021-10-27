#include<iostream>
using namespace std;

void insertionSort(int A[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
       int x=A[i];
       while(j>-1 && A[j]>x){
           A[j+1]=A[j];
           j--;
       }
       A[j+1]=x;

    }
}

int main(){
    int A[]={3,5,7,8,2};
    int n=sizeof(A)/sizeof(0);
    insertionSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}