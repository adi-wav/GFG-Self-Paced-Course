#include<iostream>
using namespace std;

//Time complexity: O(n) and Auxilliary space: theta(n) {n=n1+n2}
void merge(int a[], int low, int mid, int high){
    int n1=mid-low+1, n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[n1+i];
    }
    int i=0,j=0,k=0;
    while(i<n1 & j<n2){
        if(left[i]<right[j]){
            a[k]=left[i];
            i++;
            k++;
        }
        else if(left[i]>right[j]){
            a[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low, mid, high;
    cin>>low>>mid>>high;
    merge(a,low,mid,high);
    
    return 0;
}