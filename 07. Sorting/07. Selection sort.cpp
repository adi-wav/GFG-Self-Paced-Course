#include<iostream>
using namespace std;
//Time complexity is always theta(n2)
//Does less memory writes
//Basic idea for heap sort

//A naive approach would be to make a temp array and store min element and make it infinite in original array

//Optimized approach
void selectionsort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }
        swap(a[min_idx], a[i]);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionsort(a,n);
    return 0;
}