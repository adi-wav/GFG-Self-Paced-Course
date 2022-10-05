//Time complexity: theta(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=1;
    for(int i=1;i<=n;i++){
        if(a[i]==a[i-1])
            c++;
        else{
            cout<<a[i-1]<<" "<<c<<endl;
            c=1;
        }
    }
    return 0;
}