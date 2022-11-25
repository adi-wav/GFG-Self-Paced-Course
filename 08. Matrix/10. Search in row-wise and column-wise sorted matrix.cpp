#include<iostream>
using namespace std;
const int R=4;
const int C=4;

//Naive solution
void search(int a[R][C], int x){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(a[i][j]==x){
                cout<<"Found at "<<i<<","<<j<<" index";
                return;
            }
        }
    }
    cout<<"Not found";
}

//Efficient solution
//Time complexity: O(R+C)
void search(int a[R][C], int x){
    if(x<a[0][0] || x>a[R-1][C-1]){
        cout<<"Not found";
        return;
    }
    int i=0,j=C-1;
    int curr=a[i][j];
    while(i<R && j>=0){
        if(a[i][j]==x){
            cout<<"Found at "<<i<<","<<j<<" index";
            return;
        }
        else if(a[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Not found";
}

int main(){
    int a[R][C]={10,20,30,40,15,25,35,45,27,29,37,48,32,33,39,50};
    int ele; cin>>ele;
    search(a,ele);
    return 0;
}