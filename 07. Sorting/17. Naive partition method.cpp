#include<iostream>
using namespace std;

//Time complexity: O(n)
//Auxilliary space: O(n)
void partition(int a[], int l, int h, int p){
    int temp[h-l+1];
    int index=0;
    for(int i=l;i<h;i++){
        if(a[i]<=a[p]){
            temp[index]=a[i];
            index++;
        }
    }
    for(int i=l;i<h;i++){
        if(a[i]>a[p]){
            temp[index]=a[i];
            index++;
        }
    }
    for(int i=l;i<h;i++){
        a[i]=temp[i-l];
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p;
    cin>>p;
    partition(a,0,n,p);
    return 0;
}