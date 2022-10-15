//Peak element: If an element is greater than its neighbour elements then it is a Peak element.
#include<iostream>
using namespace std;

int getPeak(int a[], int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        // Compare middle element with its neighbours (if neighbours exist)
        if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid])){
            return mid;
        }
        if(mid>0 && a[mid]>a[mid-1]){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    cout<<getPeak(a,n);
    return 0;
}