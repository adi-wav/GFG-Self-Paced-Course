//We have to find the no. of days before it for which the value of stock is equal or less than it.
#include<iostream>
#include<stack>
using namespace std;

//Naive solution
void printSpan(int a[], int n){
    for(int i=0;i<n;i++){
        int span=1;
        for(int j=i-1;j>=0 && a[j]<=a[i];j++){
            span++;
        }
        cout<<span<<" ";
    }
}

//Efficient solution
//Time complexity: theta(n) && Space complexity: O(n)
void printSpan(int a[], int n){
    stack<int>s;
    int span;
    s.push(0);
    cout<<"1";
    for(int i=1;i<n;i++){
        while(s.empty()==false && a[s.top()]<=a[i]){
            s.pop();
        }
        span=s.empty()?i+1:i-s.top();
        cout<<span;
        s.push(i);
    }
}

int main(){
    
    return 0;
}