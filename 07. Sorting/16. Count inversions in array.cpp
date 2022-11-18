#include<iostream>
using namespace std;
//What is an inversion?
//A pair (a[i], a[j]) forms an inversion when i<j and a[i]>a[j].

//Naive solution: O(n2)
int countInvrsn(int a[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                res++;
            }
        }
    }
    return res;
}

//Efficient solution: O(nlogn)
int countAndMerge(int a[], int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[m+1+i];
    }
    int res=0, i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
        }
        else{
            a[k]=right[j];
            j++;
            res=res+(n1-i);
        }
        k++;
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
    return res;
}
int countInvrsn(int a[], int l, int r){
    int res=0;
    if(l<r){
        int m=l+(r-l)/2;
        res+=countInvrsn(a,l,m);
        res+=countInvrsn(a,m+1,r);
        res+=countAndMerge(a,l,m,r);
    }
    return res;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    return 0;
}