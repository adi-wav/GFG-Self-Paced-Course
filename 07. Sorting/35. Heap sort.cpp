//Literally ek shabd smjh nhi aaya
//I guess trees padhne ke baad kuch familiar sa lage.
//Tb tk ke liye ram ram
#include<iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int largest=i, left=2*i+1, right=2*i+2;
    if(left<n && a[left]>a[largest]){
        largest=left;
    }
    if(right<n && a[right]>a[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}

void buildHeap(int a[], int n){
    for(int i=(n-2)/2;i>=0;i--){
        heapify(a,n,i);
    }
}

void heapSort(int a[], int n){
    buildHeap(a,n);
    for(int i=n-1;i>=1;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}