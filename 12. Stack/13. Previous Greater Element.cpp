#include<iostream>
#include<stack>
using namespace std;

//Naive solution
void printPrevGreater(int a[], int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                cout<<a[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<"-1"<<" ";
        }
    }
}

//Efficient solution
//Time complexity: O(n)
void printPrevGreater(int a[], int n){
    stack<int>s;
    s.push(a[0]);
    cout<<"-1 ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=a[i]){
            s.pop();
        }
        int pg=(s.empty())?-1:s.top();
        cout<<pg<<" ";
        s.push(a[i]);
    }
}

int main(){
    
    return 0;
}