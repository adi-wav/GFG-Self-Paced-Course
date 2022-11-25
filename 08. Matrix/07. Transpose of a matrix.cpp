#include<iostream>
using namespace std;
const int R=4;
const int C=4;

//Naive solution
void transpose(int a[R][C]){
    int temp[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[i][j]=a[j][i];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            a[i][j]=temp[i][j];
        }
    }
}
//Efficient solution (in-place and one traversal)
void transpose(int a[R][C]){
    for(int i=0;i<R;i++){
        for(int j=i+1;j<C;j++){
            swap(a[i][j], a[j][i]);
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
    transpose(a);
    return 0;
}