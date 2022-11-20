//We are given an array with two elements for eg even-odd, positive-negative, 0-1, etc. So we have to separate them in the array.
#include<iostream>
using namespace std;

//Lets take the positive negative example
//Naive solution [Disadvantage: It is not an in place algorithm]
//Time complexity: O(n)
//Space complexity: O(n)
//Three traversals
void segPosNeg(int a[], int n){
    int temp[n];
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if(a[j]<0){
            temp[i]=a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(a[j]>=0){
            temp[i]=a[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        a[j]=temp[j];
    }    
}

//Better approach using lomuto/hoare algorithm
//Time complexity: O(n) and Space complexity: O(1)
void segPosNeg(int a[], int n){ //Hoare's algorithm
    int i=-1, j=n;
    while(true){
        do{
            i++;
        }while(a[i]<0);
        do{
            j--;
        }while(a[j]>=0);
        if(i>=j){
            return;
        }
        swap(a[i],a[j]);
    }
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    segPosNeg(a,n);
    return 0;
}