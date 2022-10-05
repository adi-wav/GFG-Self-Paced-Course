//Time complexity: theta(n)
//Auxilliary space: theta(1)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0, high=n-1;
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}