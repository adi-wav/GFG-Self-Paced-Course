#include<iostream>
using namespace std;

//Recursive solution [Auxilliary space: O(log n)]
int firstocc(int a[], int low, int high, int x){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(x>a[mid]){
        return firstocc(a,mid+1,high,x);
    }
    else if(x<a[mid]){
        return firstocc(a,low,mid-1,x);
    }
    else{
        if(mid==0 || a[mid-1]!=a[mid]){
            return mid;
        }
        else{
            return firstocc(a, low, mid-1, x);
        }
    }
}

//Iterative solution [Auxilliary space: O(1)]
int firstocc(int a[], int n, int x){
    int low=0, high=n-1;
    int mid = (low+high)/2;
    while(low<=high){
        if(x>a[mid]){
            low=mid+1;
        }
        else if(x<a[mid]){
            high=mid-1;
        }
        else{
            if(mid==0 || a[mid-1]!=a[mid]){
                return mid;
            }
            else{
                high=mid-1;
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
    cout<<firstocc(a,0,n-1,x);
    cout<<firstocc(a,n,x);
    return 0;
}