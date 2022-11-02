#include<iostream>
using namespace std;

//Naive solution
int minPages(int a[], int n, int k){
    if(n==1){
        return a[0];
    }
    if(k==1){
        return sum(a,0,n-1);
    }
    int res=INT16_MAX;
    for(int i=1;i<n;i++){
        res=min(res,max(minPages(a,i,k-1),sum(a,i,n-1)));
    }
    return res;
}
int sum(int a[], int b, int e){
    int s=0;
    for(int i=b;i<=e;i++){
        s+=a[i];
    }
    return s;
}

//Efficient solution
// 0(kuch smjh ni aaya :((( )

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; cin>>k;
    cout<<minPages(a,n,k);
    return 0;
}