#include<bits/stdc++.h>
using namespace std;
const int R=4;
const int C=4;

//Naive solution
//Time complexity: O(r*c*log(r*c))
int matMed(int a[R][C]){
    int n=R*C;
    int temp[n];
    int k=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[k]=a[i][j];
            k++;
        }
    }
    sort(temp,temp+n);
    return temp[n/2];
}

//Efficient solution
//Time complexity: O(r*log(max-min)*logc)
int matMed(int a[R][C], int r, int c){
    int min=a[0][0], max=a[0][C-1];
    for(int i=1;i<r;i++){
        if(a[i][0]<min){
            min=a[i][0];
        }
        if(a[i][c-1]>max){
            max=a[i][c-1];
        }
    }
    int medPos=(r*c+1)/2;
    while(min<max){
        int mid=(min+max)/2;
        int midPos=0;
        for(int i=0;i<r;i++){
            midPos+=upper_bound(a[i],a[i]+c,mid)-a[i];
        }
        if(midPos<medPos){
            min=mid+1;
        }
        else{
            max=mid;
        }
    }
    return min;
}

int main(){
    int a[R][C]={1,10,20,15,25,30,5,8,40};
    matMed(a,R,C);
    return 0;
}