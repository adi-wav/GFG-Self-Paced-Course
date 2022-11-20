#include<iostream>
using namespace std;

int partition(int a[], int l, int h){
    int pivot=a[l];
    int i=l-1;
    int j=h+1;
    while(true){
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
    }
}
void quicksort(int a[], int l, int h){
    if(l<h){
        int pi=partition(a,l,h);
        quicksort(a,l,pi); //here position of pivot is not at the centre so we have to sort that also
        quicksort(a,pi+1,h);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}