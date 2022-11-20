//The basic idea is to count the number of elements smaller than the selected element and then put the element at its correct position.
#include<iostream>
using namespace std;

void cycleSortDistinct(int a[], int n){
    //First we put the first element at its right position
    for(int cs=0;cs<n-1;cs++){
        int item=a[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++){
            if(a[i]<a[cs]){
                pos++;
            }
        }
        swap(item,a[pos]);
        //Then we place the remaining elements at their correct position
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1;i<n;i++){
                if(a[i]<item){
                    pos++;
                }
            }
            swap(item,a[pos]);
        }
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cycleSortDistinct(a,n);
    return 0;
}