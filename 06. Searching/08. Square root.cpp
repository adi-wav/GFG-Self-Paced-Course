#include<iostream>
using namespace std;

int sqRootFloor(int n){
    int low=0, high=n-1, ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n){
            return mid;
        }
        else if(msq>n){
            high=mid-1;
        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int n; cin>>n;
    cout<<sqRootFloor(n);
    return 0;
}