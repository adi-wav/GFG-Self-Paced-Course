#include<iostream>
#include<stack>
using namespace std;

//Time complexity: O(1) & One traversal & One stack
int maxArea(int a[], int n){
    stack<int>s;
    s.push(0);
    int res=0;
    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()]>=a[i]){
            int tp=s.top();
            s.pop();
            int curr=a[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(curr,res);
        }
        s.push(i);
    }
    while(!s.empty()){
        int tp=s.top();
        s.pop();
        int curr=a[tp]*(s.empty()?n:(n-s.top()-1));
        res=max(res,curr);
    }
    return res;
}

int main(){
    
    return 0;
}