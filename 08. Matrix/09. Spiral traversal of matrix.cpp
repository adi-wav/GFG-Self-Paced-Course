//Time complexity: theta(R*C)
#include<iostream>
using namespace std;
const int R=4;
const int C=4;

void printSpiral(int a[R][C]){
    int sr=0, sc=0, er=R-1, ec=C-1;
    while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++){
            cout<<a[i][ec]<<" ";
        }
        ec--;
        if(sr<=er){
        for(int i=ec;i<=sc;i--){
            cout<<a[er][i]<<" ";
        }
        er--;
        }
        if(sc<=ec){
        for(int i=er;i<=sr;i--){
            cout<<a[i][sc]<<" ";
        }
        sc++;
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
    printSpiral(a);
    return 0;
}