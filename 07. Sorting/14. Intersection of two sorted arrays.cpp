//Print the common elements of two sorted arrays only once.
#include<iostream>
using namespace std;

//Naive solution: O(nxm)
void intersection(int a1[], int a2[], int m, int n){
    for(int i=0;i<m;i++){
        if(i>0 && a1[i]==a1[i-1]){
            continue;
        }
        for(int j=0;j<n;j++){
            if(a1[i]==a2[j]){
                cout<<a1[i]<<" ";
                break;
            }
        }
    }
}

//Efficient solution: O(mxn)
void intersection(int a[], int b[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main(){
    int m; cin>>m;
    int a1[m];
    for(int i=0;i<m;i++){
        cin>>a1[i];
    }
    int n; cin>>n;
    int a2[n];
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    intersection(a1,a2,m,n);
    
    return 0;
}