#include<iostream>
using namespace std;

//Recursive solution [Time complexity: O(log n) & Auxilliary space: O(log n)]
int lastocc(int a[], int low, int high, int n, int x){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if(a[mid]>x){
        lastocc(a,low,mid-1,n,x);
    }
    else if(a[mid]<x){
        lastocc(a,mid+1,high,n,x);
    }
    else{
        if(a[mid]!=a[mid+1] || mid==n-1){
            return mid;
        }
        else{
            return lastocc(a,mid+1,high,n,x);
        }
    }
}

//Iterative solution [Time complexity: O(log n) & Auxilliary space: O(1)]
int lastocc(int a[], int n, int x){
    int low=0, high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(a[mid]<x){
            low=mid+1;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
        else{
            if(mid==n-1 || a[mid]!=a[mid+1]){
                return mid;
            }
            else{
                low=mid+1;
            }
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
    int x; cin>>x;
    cout<<lastocc(a,n,x);
    return 0;
}