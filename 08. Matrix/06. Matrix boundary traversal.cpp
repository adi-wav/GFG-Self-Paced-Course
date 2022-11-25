//Time complexity: theta(R+C)
#include<iostream>
using namespace std;
const int R=4;
const int C=4;
void bTraversal(int a[R][C]){
    if(R==1){
        for(int i=0;i<C;i++){
            cout<<a[0][i]<<" ";
        }
    }
    else if(C==1){
        for(int i=0;i<R;i++){
            cout<<a[i][0]<<" ";
        }
    }
    else{
        for(int i=0;i<C;i++){
            cout<<a[0][i]<<" ";
        }
        for(int i=1;i<R;i++){
            cout<<a[i][C-1]<<" ";
        }
        for(int i=C-2;i>=0;i--){
            cout<<a[R-1][i]<<" ";
        }
        for(int i=R-2;i>=1;i--){
            cout<<a[i][0]<<" ";
        }
    }
}

int main(){
    int a[R][C];
    int k=1;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            a[i][j]=k;
            k++;
        }
    }
    bTraversal(a);
    return 0;
}