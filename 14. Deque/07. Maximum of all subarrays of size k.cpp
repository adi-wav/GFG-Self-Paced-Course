//No. of subarrays of size k in an array of size n = n-k+1
#include<iostream>
#include<deque>
using namespace std;

//Naive solution [O(n2)]
void printMaxK(int a[], int n, int k){
    for(int i=0;i<n-k+1;i++){
        int mx=a[i];
        for(int j=i+1;j<i+k;j++){
            mx=max(a[j],mx);
        }
        cout<<mx<<" ";
    }
}

//Efficient solution [O(n)]
void printMaxK(int a[], int n, int k){
    deque<int>dq;
    for(int i=0;i<k;i++){
        while(!dq.empty() && a[i]>=a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<a[dq.front()]<<" ";
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
        while(!dq.empty() && a[i]>=a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout<<a[dq.front()]<<" ";
}

int main(){
    
    return 0;
}