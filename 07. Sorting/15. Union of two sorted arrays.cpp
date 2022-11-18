#include<bits/stdc++.h>
using namespace std;

//Naive solution: O((m+n)*log(m+n))
//Auxilliary space: O(m+n)
void union_arr(int a[], int b[], int m, int n){
    int c[m+n];
    int k=0;
    for(int i=0;i<m;i++){
        c[k]=a[i];
        k++;
    }
    for(int j=0;j<n;j++){
        c[k]=b[j];
        k++;
    }
    sort(c, c+m+n);
    for(int i=0;i<m+n;i++){
        if(i==0 || c[i]!=c[i-1]){
            cout<<c[i]<<" ";
        }
    }
}

//Efficient solution: O(m+n)
//Auxilliary space: O(1)
void union_arr(int a[], int b[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<m){
        if(i==0 || a[i]!=a[i-1]){
            cout<<a[i]<<" ";
        }
    }
    while(j<n){
        if(j==0 || b[j]!=b[j-1]){
            cout<<b[j]<<" ";
        }
    }
}

int main(){
    int m; cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int n; cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    union_arr(a,b,m,n);
    return 0;
}