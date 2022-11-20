#include<bits/stdc++.h>
using namespace std;

//Naive solution 
//Time complexity: O(nlogn)
int kthsmallest(int a[], int n, int k){
    sort(a,a+n);
    return a[k-1];
}

//Better approach(using lomuto)
int partition(int a[], int l, int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
int kthsmallest(int a[], int n, int k){
    int l=0, r=n-1;
    while(l<=r){
        int p=partition(a,l,r);
        if(p==k-1){
            return k-1;
        }
        else if(p>k-1){
            r=p-1;
        }
        else{
            l=p+1;
        }
    }
    return -1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; cin>>k;
    kthsmallest(a,n,k);
    return 0;
}