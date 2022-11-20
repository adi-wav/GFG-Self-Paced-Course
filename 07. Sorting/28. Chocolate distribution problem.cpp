//We are given an array of n elements(no. of chocolates in each packet) and an integer m(no. of students). We have to distribute one packet to each student such that the difference between the maximum and minimum no. of chocolates is minimum. And the output should be that difference.
//Time complexity: O(nlogn)
#include<bits/stdc++.h>
using namespace std;

int minDiff(int a[], int m, int n){
    if(m>n){
        return -1;
    }
    sort(a,a+n);
    int res=a[m-1]-a[0];
    for(int i=0;i+m-1<n;i++){
        res=max(res,a[i+m-1]-a[i]);
    }
    return res;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m; cin>>m;
    cout<<minDiff(a,m,n);
    return 0;
}