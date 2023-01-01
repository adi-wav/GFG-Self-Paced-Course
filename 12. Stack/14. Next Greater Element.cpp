#include<iostream>
#include<stack>
using namespace std;

//Naive solution
void nextGreater(int a[], int n){
    for(int i=0;i<n;i++){
        int j;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                cout<<a[j]<<" ";
                break;
            }
        }
        if(j==n){
            cout<<"-1 ";
        }
    }
}

//Efficient solution
//Time complexity: O(n) && Space complexity: O(n)
void nextGreaterElement(int a[], int n){
    stack<int>s;
    s.push(a[n-1]);
    cout<<"-1 ";
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && s.top()<=a[i]){
            s.pop();
        }
        int ng=(s.empty())?-1:s.top();
        cout<<ng<<" ";
        s.push(a[i]);
    }
}
//prints output in reverse order -> store the output in vector and then print the reverse of it.

int main(){
    
    return 0;
}