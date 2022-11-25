#include<iostream>
using namespace std;
const int R=4;
const int C=4;

//Naive solution
//Time complexity: O(n2) & Auxilliary space: O(n2)
void rotate90(int a[R][C]){
    int temp[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[C-j-1][i]=a[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            a[i][j]=temp[i][j];
        }
    }
}

//Efficient solution
//Time complexity: O(n2) & Auxilliary space: O(1)
void rotate90(int a[R][C]){
    //finc transpose
    for(int i=0;i<R;i++){
        for(int j=i+1;j<C;j++){
            swap(a[i][j], a[j][i]);
        }
    }
    //reverse individual columns
    for(int i=0;i<C;i++){
        int s=0,e=R-1;
        while(s<e){
            swap(a[s][i], a[e][i]);
            s++; e--;
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
    rotate90(a);
    return 0;
}