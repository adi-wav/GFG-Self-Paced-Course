//Time complexity: theta(R*C)
#include<iostream>
using namespace std;
const int R=3;
const int C=3;
void printSnake(int a[R][C]){
    for(int i=0;i<R;i++){
        if(i%2==0){
            for(int j=0;j<C;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=C-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}

int main(){
    int a[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>a[i][j];
        }
    }
    printSnake(a);
    return 0;
}