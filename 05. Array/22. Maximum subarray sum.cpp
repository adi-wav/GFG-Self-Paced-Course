//Approach 1(naive)
//Time complexity: O(n2)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=a[0];;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr+=a[j];
            res=max(res,curr);
        }
    }
    cout<<res;
    return 0;
}

//Approach 2
//Time complexity: O(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    int maxEnding=a[0];
    for(int i=0;i<n;i++){
        maxEnding=max(maxEnding+a[i],a[i]);
        res=max(res,maxEnding);
    }
    cout<<res;
    return 0;
}