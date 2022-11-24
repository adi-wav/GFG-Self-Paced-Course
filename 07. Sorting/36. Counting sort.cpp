//Counting sort is useful to sort low elements. 
//It takes O(n+k) time to sort n element ranging from 0 to k-1.
//It is not a comparison algorithm.
#include<iostream>
using namespace std;

//Naive implementation
//Time complexity: theta(n+k)
void countSort(int a[], int n, int k){
    int count[k];
    for(int i=0;i<k;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    int idx=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<count[i];j++){
            a[idx]=i;
            idx++;
        }
    }
}

//General Purpose Implementation
//Time complexity: theta(n+k) and Auxilliary space: theta(n+k)
void countSort(int a[], int n, int k){
    int count[k];
    //making a count array with all zero elements
    for(int i=0;i<k;i++){
        count[i]=0;
    }
    //increasing the elements according to the indexes of count array
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    //making the count array cumulative
    for(int i=1;i<k;i++){
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    //traversing from last element of a array and using its element as index and finding the element in count array and decrementing the entry at that position and then putting it in output array.
    for(int i=n-1;i>=0;i--){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<k;i++){
        a[i]=output[i];
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    return 0;
}