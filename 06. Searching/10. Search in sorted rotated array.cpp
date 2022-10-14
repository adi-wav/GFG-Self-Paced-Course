#include<iostream>
using namespace std;

//Time complexity: O(log n)
int search(int a[], int n, int x){
    //Normal binary search
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
    
        if(a[mid]==x){
            return mid;
        }
        //Left half sorted
        if(a[low]<a[mid]){
            if(x>=a[low] && x<a[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //Right half sorted
        else{
            if(x>a[mid] && x<=a[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    return 0;
}