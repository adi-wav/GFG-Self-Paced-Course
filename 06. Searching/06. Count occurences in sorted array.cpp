#include<iostream>
using namespace std;

//Unawared approach [Time complexity: looks like O(log n), but actually is O(n) in worst case]
int c=0;
int count(int a[], int low, int high, int x){
    int mid=(low+high)/2;
    if(a[mid]==x){
        c++;
        if(a[mid-1]==x){
            count(a,low,mid-1,x);
        }
        else if(a[mid+1]==x){
            return count(a,mid+1,high,x);
        }
    }
    else if(a[mid]>x){
        return count(a,low,mid-1,x);
    }
    else{
        return count(a,mid+1,high,x);
    }
    if(low==high)
        return c;
}

//Proper approach [Time complexity: O(log n)]
int firstocc(int a[], int n, int x){
    int low=0, high=n-1;
    int mid = (low+high)/2;
    while(low<=high){
        if(x>a[mid]){
            low=mid+1;
        }
        else if(x<a[mid]){
            high=mid-1;
        }
        else{
            if(mid==0 || a[mid-1]!=a[mid]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int lastocc(int a[], int n, int x){
    int low=0, high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(a[mid]<x){
            low=mid+1;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
        else{
            if(mid==n-1 || a[mid]!=a[mid+1]){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}

int count(int a[], int n, int x){
    int first = firstocc(a,n,x);
    if(first==-1){
        return 0;
    }
    else{
        return (lastocc(a,n,x)-first+1);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    count(a,n,x);
    count(a,0,n-1,x);
    return 0;
}