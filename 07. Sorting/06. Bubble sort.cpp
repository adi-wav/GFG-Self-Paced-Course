#include<iostream>
using namespace std;

//Time complexity: O(n2)
void bubblesort(int a[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false; //optimization
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true; //optimization
            }
            //optimization
            if(swapped==false){ 
                break;
            }
        }
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n);
    return 0;
}

//optimization: if the remaining array is sorted then there will be no swapping so why go further.