//Repeating elements: An array is given with an element repeating one or more times. You have to find that element.
#include<iostream>
using namespace std;

int findRepeating(int a[], int n){
    //Super-Naive solution 
    //TC: O(n2) AS: O(1)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }

    ///Naive solution
    //TC: O(nlogn) AS: O(1)
    // Sort the array
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            return a[i];
        }
    }

    //Efficient solution
    //TC: O(n) AS: O(n)
    bool check[n];
    for(int i=0;i<n;i++){
        if(check[a[i]]){
            return a[i];
        }
        check[a[i]]=true;
    }

    //Most efficient solution
    //TC: O(n) AS: O(1)
    //phase 1
    int slow=a[0]+1, fast=a[0]+1;
    do{
        slow=a[slow]+1;
        fast=a[a[fast]+1]+1;
    } while(slow!=fast);
    //yahan tk dono pointer same element pe aagye hain
    //phase 2
    slow=a[0]+1;
    while(slow!=fast){
        slow=a[slow]+1;
        fast=a[fast]+1;
    }
    return slow-1;
}



int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findRepeating(a,n);
    return 0;
}