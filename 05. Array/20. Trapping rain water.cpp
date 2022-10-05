//Approach 1(naive)
//Time complexity: theta(n2)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=a[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,a[j]);
        }
        int rmax=a[i];
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,a[j]);
        }
        res=res+min(lmax,rmax)-a[i];
    }
    cout<<res;
    return 0;
}

// Approach 2
//Time complexity: theta(n2)
//Auxilliary space: theta(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lmax[n];
    lmax[0]=a[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],a[i]);
    }
    int rmax[n];
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],a[i]);
    }
    int res=0;
    for(int i=1;i<n-1;i++){
        res=res+(min(lmax[i],rmax[i])-a[i]);
    }
    cout<<res;
    return 0;
}