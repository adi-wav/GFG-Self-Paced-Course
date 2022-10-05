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
    int res=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            if(a[i]==1)
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
//Time complexity: O(1)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    int ma=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            c++;
            ma=max(ma,c);
        }
        else
            c=0;
    }
    cout<<ma;
    return 0;
}