#include<iostream>
using namespace std;

//Naive approach
//Time complexity: O(n2)
int findMajority(int a[], int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>n/2){
            return i;
        }
    }
    return -1;
}

//Moore's method
int findMajority(int a[], int n){
    int count=1, res=0;
    for(int i=1;i<n;i++){
        if(a[res]==a[i])
            count++;
        else
            count--;
        if(count==0){
            count=1;
            res=i;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[res])
            count++;
    }
    if(count>n/2)
        return res;
    else
        return -1;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findMajority(a,n);
    return 0;
}