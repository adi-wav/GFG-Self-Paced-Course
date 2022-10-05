#include<iostream>
using namespace std;
//Approach 1
int getLargest(int a[], int n){
    int largest=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[largest])
            largest=i;
    }
    return largest;
}

int secondLargest(int a[], int n){
    int largest=getLargest(a,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[largest]){
            if(res==-1)
                res=i;
            else if(a[i]>a[res])
                res=i;
        }
    }
    return res;
}
//Approach 2 (In this method we don't need to traverse the array twice)
int secondLargest(int a[], int n){
    int res=-1, largest=0;
    for(int i =0;i<n;i++){
        if(a[i]>a[largest]){
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest]){
            if(res==-1 || a[i]>a[largest])
                res=i;
        }
    }
    return res;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    secondLargest(a,n);
    return 0;
}