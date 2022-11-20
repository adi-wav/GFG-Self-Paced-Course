//We are given two arrays arrival and departure having the times of arrival and departure. We have to find out the maximum number of guests we can meet/present at one point of time in party.
#include<bits/stdc++.h>
using namespace std;

//Time complexity: O(nlogn)
int maxGuest(int arr[], int dep[], int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dep[n];
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }
    cout<<maxGuest(arr,dep,n);
    return 0;
}