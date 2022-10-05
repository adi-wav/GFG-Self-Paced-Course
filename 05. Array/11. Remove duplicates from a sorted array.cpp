//Approach 1(naive)
//Time complexity: O(n)
//Auxilliary space: O(1)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp[n];
    temp[0]=a[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=a[i]){
            temp[res]=a[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<res;
    return 0;
}

//Approach 2
//Time complexity: O(n)
//Auxilliary space: O(1)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[k-1]){
            a[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<k;
    return 0;
}