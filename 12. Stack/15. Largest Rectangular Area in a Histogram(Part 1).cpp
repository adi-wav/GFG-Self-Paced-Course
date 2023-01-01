#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

//Naive solution
//Time complexity: theta(n)
int getMaxArea(int a[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>=a[i])
                curr+=a[i];
            else
                break;
        }
        for(int j=i+1;j<n;j++){
            if(a[j]>=a[i])
                curr+=a[i];
            else
                break;
        }
        res=max(res,curr);
    }
    return res;
}

//Bettter Solution
//Time complexity: O(n) and Three traversals and Three stacks
int maxArea(int a[], int n){
    //previous smaller index
    stack<int>pss;
    vector<int> ps;
    pss.push(0);
    ps.push_back(-1);
    for(int i=1;i<n;i++){
        while(!pss.empty() && ps[pss.top()]>=ps[i]){
            pss.pop();
        }
        int psi=pss.empty()?-1:pss.top();
        ps.push_back(psi);
        pss.push(i);
    }

    //next smaller index
    stack<int>nss;
    vector<int>ns;
    nss.push(n);
    ns.push_back(-1);
    for(int i=n-2;i>=0;i--){
        while(!nss.empty() && ns[nss.top()]>=ns[i]){
            nss.pop();
        }
        int nsi=nss.empty()?n:nss.top();
        ns.push_back(nsi);
        nss.push(i);
    }
    reverse(ns.begin(),ns.end());

    //algorithm
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        int curr=a[i];
        curr+=(i-ps[i]-1)*a[i];
        curr+=(ns[i]-i-1)*a[i];
        res=max(res,curr);
    }
    cout<<res;
}

int main(){
    
    return 0;
}