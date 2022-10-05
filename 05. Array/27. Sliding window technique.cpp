//WINDOW SLIDING TECHNIQUE

//Find maximum sum of k consecutive numbers.
//Approach 1(naive)
//Time complexity: O((n-k)*k)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; cin>>k;
    int max_sum=INT16_MIN;
    for(int i=0;i+k-1<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=a[i+j];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum;
    return 0;
}

//Approach 2(WINDOW SLIDING TECHNIQUE)
//Time complexity: O(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; cin>>k;
    int curr_sum=0;
    for(int i=0;i<k;i++){
        curr_sum+=a[i];
    }
    int max_sum=curr_sum;
    for(int i=k;i<n;i++){
        curr_sum=curr_sum+(a[i]-a[i-k]);
        max_sum=max(max_sum,curr_sum);
    }
    cout<<max_sum;
    return 0;
}

//Find if there is an subarray of given sum in an array of 'non-negative' integers.
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; cin>>k;
    int curr_sum=a[0];
    int s=0;
    for(int i=1;i<n;i++){
        while(curr_sum>k && s<i-1){
            curr_sum-=a[s];
            s++;
        }
        if(curr_sum==k){
            cout<<"Yes";
            return 0;
        }
        if(i<n){
            curr_sum+=a[i];
        }
        cout<<"No";
    }
    return 0;
}

//N-bonacci number
#include<iostream>
using namespace std;

int main(){
    
    return 0;
}