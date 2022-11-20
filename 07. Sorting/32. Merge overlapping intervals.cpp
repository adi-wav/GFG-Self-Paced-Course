//We are given an array of intervals and we have to merge the intervals as much as we can and return the different intervals
#include<bits/stdc++.h>
using namespace std;

//Naive solution
//Time complexity: O(n3)
//we need to traverse through every element therefore it requires O(n2) time and then O(n) time for deleting the element which has been merged.

//Efficient approach
//Time complexity: O(nlogn)
void merge(vector<pair<int,int>> a, int n){
    sort(a.begin(), a.end());
    int res=0;
    for(int i=1;i<n;i++){
        if(a[res].second>=a[res].first){
            if(a[i].first<a[res].second){
                a[res].first=min(a[res].first,a[i].first);
                a[res].second=max(a[res].second,a[res].second);
            }
            else{
                res++;
                a[res]=a[i];
            }
        }
    }
    for(int i=0;i<=res;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}

int main(){
    int n; cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    merge(a,n);
    return 0;
}