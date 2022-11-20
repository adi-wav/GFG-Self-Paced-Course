#include<iostream>
using namespace std;

//Not a stable algorithm
int hoare(int a[], int l, int h){
    int pivot=a[l];
    int i=l-1;
    int j=h+1;
    while(true){
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    hoare(a,0,n-1);
    return 0;
}