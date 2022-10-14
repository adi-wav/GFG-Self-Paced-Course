//Auxilliary space: O(log n)

#include<iostream>
using namespace std;

int bsearch(int a[], int low, int high, int x){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if(a[mid]==x){
        return mid;
    }
    else if(a[mid] > x){
        return bsearch(a, low, mid-1, x);
    }
    else{
        return bsearch(a, mid+1, high, x);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<bsearch(a, 0, n-1, x);
    return 0;
}