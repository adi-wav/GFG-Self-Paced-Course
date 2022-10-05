#include<iostream>
using namespace std;
int deleteEle(int a[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x)
        break;
    }
    if(i==n)
        return n;
    for(int j=i;j<n-1;j++)
        a[j]=a[j+1];
    return n-1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    deleteEle(a,n,x);
    return 0;
}

/*Time complexities of various operations on array:
Insert: O(n)
Search: O(n) for unsorted
        O(n) for sorted
Delete: O(n)
Get i-th element: O(1)
Update i-th element: O(1)
Note: Insert and delete at the end can be done in O(1) time.
*/