//Majority element: Element that occurs more than n/2 times in an array.
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
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
                count++;
        }
        if(count>(n/2)){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}

//Approach 2 [  MOORE'S VOTING ALGORITHM  ]
//Time complexity: O(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=1, res=0;
    for(int i=1;i<n;i++){
        if(a[res]==a[i])
            count++;
        else
            count--;
        if(count==0){
            count=1;
            res=i;
        }
    }
//39-49: we are finding the res.
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[res])
            count++;
    }
    if(count>n/2)
        cout<<res;
    else
        cout<<"-1";
//51-59: we are checking if the calculated res is in majority or not.
    return 0;
}