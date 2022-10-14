#include<iostream>
using namespace std;

int bsearch(int a[], int n, int x){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] > x){
            high = mid-1;
        }
        else{
            low = mid+1;
        } 
    }
    return -1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<bsearch(a,n,x);
    return 0;
}