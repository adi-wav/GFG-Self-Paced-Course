//Given n ranges, find the maximum appearing element in their ranges.
//L,R are the range arrays. L contains the left/starting indices and R contains the counterpart.
//No need of input array, we are taking natural numbers.
//Bs 10% hi smjh aaya 🙃
#include<iostream>
using namespace std;
int maxOcc(int L[], int R[], int n){
    int a[1000];
    for(int i=0;i<n;i++){
        a[L[i]]++;
        a[R[i]+1]--;
    }
    int maxm=a[0],res=0;
    for(int i=1;i<1000;i++){
        a[i]+=a[i-1];
        if(maxm<a[i]){
            maxm=a[i];
            res=i;
        }
    }
    return res;
}
int main(){
    int n; cin>>n;
    int l[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    int r[n];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    cout<<maxOcc(l,r,n);
    return 0;
}