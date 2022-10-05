//time complexity: theta(n)
//auxilliary space: theta(d)
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n; 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d; cin>>d;
    int e[d];
    for(int i=0;i<d;i++){
        e[i]=a[i];
    }
    for(int i=0;i<n-d;i++){
        a[i]=a[i+d];
    }
    for(int i=0;i<n;i++){
        a[n-d+i]=e[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//Reversal Algorithm
//time complexity: theta(n)
//auxilliary space: theta(1)
#include<iostream>
using namespace std;
void reverse(int a[],int low,int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void leftRotate(int a[], int n, int d){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
int main(){
    int n; cin>>n; 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d; cin>>d;
    leftRotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}