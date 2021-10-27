#include<bits/stdc++.h>
using namespace std;

int FindMax(int A[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max) {max=A[i];}
    }
return max;
}


void countSort(int A[],int n){
    int max=FindMax(A,n);
    int *B=new int(max+1);
    for(int i=0;i<max+1;i++){
        B[i]=0;
    }

    for(int i=0;i<n;i++){
        B[A[i]]++;
    }

    int i=0;
    int j=0;
    while(i<max+1){
        if(B[i]>0){
            A[j++]=i;
            B[i]--;
        }
        else{
            i++;
        }
    }
}



int main(){
    int A[]={3,5,7,8,2};
    int n=sizeof(A)/sizeof(0);
    countSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}