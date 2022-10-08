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
    int res=1;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=i+1;j<n;j++){
            if((a[j]%2==0 && a[j-1]%2!=0)||(a[j]%2!=0 && a[j-1]%2==0))
                curr++;
            else
                break;
        }
        res=max(res,curr);
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
    int res=1;
    for(int i=1;i<n;i++){
        int c=1;
        if(a[i]%2!=a[i-1]%2){
            c++;
            res=max(res,c);
        }
        else
            c=1;
    }
    cout<<res;
    return 0;
}