//Maximum value of a[j]-a[i] while j>i
//Approach 1(naive)
//Time complexity: theta(n2)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ma=a[1]-a[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ma=max(ma,(a[j]-a[i]));
        }
    }
    cout<<ma;
    return 0;
}

// Approach 2
//Time complexity: theta(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=a[1]-a[0];
    int minval=a[0];
    for(int i=1;i<n;i++){
        res=max(res,a[i]-minval);
        minval=min(minval,a[i]);
    }
    cout<<res;
    return 0;
}