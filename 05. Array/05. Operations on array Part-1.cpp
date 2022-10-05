#include<iostream>
using namespace std;
int search(int a[], int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x)
        return i;
    }
    return -1;
}
int insert(int a[], int n, int x, int cap, int pos){ //cap is capacity means how much elements intotal an array can store.
    if(n==cap)
        return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--){
        a[i+1]=a[i];
    }
    a[idx]=x;
    return (n+1);
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<search(a,n,x);
    int cap; cin>>cap;
    int pos=0;
    cout<<insert(a,n,x,cap,pos);
    return 0;
}
