//Find if there exists a pair in a sorted array which adds up to the given sum.
#include<iostream>
using namespace std;

//Time complexity: O(n)
bool isPair(int a[], int i, int n, int x){
    int left=0;
    int right=n-1;
    while(left<right){
        if(a[left]+a[right]==x){
            return true;
        }
        else if(a[left]+a[right]>x){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}

//Find if there exists a triplet in the given sorted array that adds up to a given sum.
//Time complexity: O(n2)
bool isTriplet(int a[], int x, int n){
    for(int i=0;i<n;i++){
        if(isPair(a,i+1,n-1,x-a[i])){
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<isPair(a,0,n,x);
    return 0;
}


//Questions:
//1. Count pairs with given sum
//2. Count triplets with given sum
//3. Find if there is a triplet a,b,c that gives a2 + b2 = c2