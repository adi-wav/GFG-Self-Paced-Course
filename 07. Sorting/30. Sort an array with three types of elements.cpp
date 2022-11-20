//Here we are given three types of elements and we have to sort them in particular manner for eg 0-1-2, <x - x ->x or instead of x it could be range.
#include<iostream>
using namespace std;

//Lets take the 0-1-2 problem
//Naive approach
//Time complexity: O(n) and Space complexity: O(n) | Four traversals
void sort(int a[], int n){
    int temp[n];
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if(a[j]==0){
            temp[i]=a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(a[j]==1){
            temp[i]=a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(a[j]==2){
            temp[i]=a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        a[j]=temp[j];
    }    
}

//National Dutch Flag approach(extended hoare's algorithm)
//Time complexity: O(n) and Space complexity: O(1) | One traversal
void sort(int a[], int n){
    int l=0, m=0, h=n-1;
    while(m<=h){
        if(a[m]==0)
        {
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if (a[m]==1)
        {
            m++;
        }
        else{
            swap(a[m],a[h]);
            h--;
        }
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
    return 0;
}