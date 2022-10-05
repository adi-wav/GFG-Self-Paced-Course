//Prefix Sum Array
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int prefix_sum[n];
    prefix_sum[0]=a[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }
    for(int i=0;i<n;i++){
        cout<<prefix_sum[i]<<" ";
    }
    return 0;
}

//Find the sum of elements in between the given indices.
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l,r; cin>>l>>r;
    int prefix_sum[n];
    prefix_sum[0]=a[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }
    if(l!=0)
        cout<<prefix_sum[r]-prefix_sum[l-1];
    else
        cout<<prefix_sum[r];
    return 0;
}

//Equilibrium point: An element in an array which has sum of all elements on its left is equal to sum of all element on its right.
//Find if the array has an equilibrium point or not.
//Approach 1(naive)
//Time complexity: O(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int l_sum=0,r_sum=0;
        for(int j=0;j<i;j++){
            l_sum+=a[j];
        }
        for(int k=i+1;k<n;k++){
            r_sum+=a[k];
        }
        if(l_sum==r_sum){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}

//Approach 2(better)
//Time complexity: O(n)
//Auxilliary space: O(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pre[n];
    int suf[n];
    pre[0]=a[0];
    suf[n-1]=a[n-1];
    for(int i=0;i<n;i++){
        pre[i]=pre[i-1]+a[i];
        suf[n-2-i]=suf[n-1-i]+a[n-2-i];
    }
    for(int i=0;i<n;i++){
        if(pre[i]==suf[i]){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}

//Approach 3(best)
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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++){
        if(l_sum==sum-a[i]){
            cout<<"Yes";
            return 0;
        }
        l_sum+=a[i];
        sum-=a[i];
    }
    cout<<"No";
    return 0;
}