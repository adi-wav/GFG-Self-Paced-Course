#include<iostream>
using namespace std;

//Naive solution [Time complexity: O(pos) & Auxilliary space: O(1)]
int search(int a[], int x){
    int i=0;
    while (true){
        if(a[i]==x){
            return i;
        }
        if(a[i]>x){
            return -1;
        }
        i++;
    }
    
}

//Better approach [Time complexity: O(log n) & Auxilliary space: O(1)]
int bsearch(int a[], int x, int low, int high){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if(a[mid]==x){
        return mid;
    }
    else if(a[mid] > x){
        return bsearch(a, low, mid-1, x);
    }
    else{
        return bsearch(a, mid+1, high, x);
    }
}

int search(int a[], int x){
    if(a[0]==x){
        return 0;
    }
    int i=1;
    while(a[i]<x){
        i=i*2;
    }
    if(a[i]==x){
        return i;
    }
    bsearch(a, x, (i/2)+1, i-1);
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<search(a,x);
    return 0;
}