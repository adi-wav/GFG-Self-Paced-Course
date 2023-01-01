//We are given a binary matrix, we have to find the largest matrix with all 1's. 
//We make a cumulative matrix and then apply the maxRectangle area concept on every row and then find the max out of them.
#include<iostream>
#include<stack>
using namespace std;

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
//Time complexity: theta(RxC) & Auxilliary space: O(C)
const int R=4;
const int C=4;
int maxRectangle(int a[R][C]){
    int res=maxArea(a[0],C);
    for(int i=1;i<R;i++){
        for(int j=0;j<C;j++){
            if(a[i][j]==1){
                a[i][j]+=a[i-1][j];
            }
        }
        res=max(res,maxArea(a[i],C));
    }
    return res;
}

int main(){
    
    return 0;
}