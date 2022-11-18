#include<iostream>
using namespace std;

//Time complexity: O(n) and Auxilliary space: O(1)
int lomuto(int a[], int l, int h){
    int pivot=a[h]; //We are taking the pivot as the last element by default or if any index is given then simply swap it with the last element.
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lomuto(a,0,n-1);
    return 0;
}