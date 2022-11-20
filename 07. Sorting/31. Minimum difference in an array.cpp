//Find minimum difference between two elements in an array.
#include<bits/stdc++.h>
using namespace std;

//Naive approach
//Time complexity: theta(n2)
int minDiff(int a[], int n){
    int res=INT16_MAX;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            res=min(res,abs(a[j]-a[i]));
        }
    }
    return res;
}

//Better approach
//Time complexity: O(nlogn)
int minDiff(int a[], int n){
    sort(a, a+n);
    int res=INT16_MAX;
    for(int i=0;i<n-1;i++){
        res=min(res,a[i+1]-a[i]);
    }
    return res;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minDiff(a,n);
    return 0;
}