#include<iostream>
using namespace std;

    //Naive approach
    //Create a temp array
    //Copy elements of a1 and a2 in temp
    //Sort temp
    //Find middle element
    //Time complexity: O(n1+n2)*log(n1+n2)
    //Auxilliary space: O(n1+n2)
int median(int n1, int a1[], int n2, int a2[]){
    int temp[n1+n2];
    for(int i=0;i<n1;i++){
        temp[i]=a1[i];
    }
    for(int i=n1;i<n2;i++){
        temp[i]=a2[i-n1];
    }
    // mergeSort temp
    // find the middle element
}

int main(){
    int n1; cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    int n2; cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    cout<<median(n1,a1,n2,a2);
    
    return 0;
}