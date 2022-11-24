//Radix sort is similar like counting sort, its just that it can be used for big numbers too.
//It compares the numbers according to the value at that decimal place.
#include<iostream>
using namespace std;
//We first sort the unit place, then tens place and so on.
void countingSort(int a[], int n, int exp){
    int count[10],output[n];
    for(int i=0;i<10;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[(a[i]/exp)%10]++;
    }
    for(int i=0;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        output[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}

void radixSort(int a[], int n){
    int mx=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    for(int exp=1;mx/exp>0;exp=exp*10){
        countingSort(a,n,exp);
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