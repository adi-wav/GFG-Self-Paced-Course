// Important points:
// 1. Elements are stored in row major order.
// 2. Internal curly brakcets are optional.
//     int a[2][3]={1,2,3,4,5,6};
// 3. Only the first dimension can be omitted when we initialize
//     int a[][2]={{1,2},{3,4}}
//     int a[][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}}

//Variable sized arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=3,n=2;
    //Ways to create multidimensional array
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=i+j;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }

    //1. Double pointer method
    int **a1;
    a1 = new int *[m];
    for(int i=0;i<m;i++){
        a1[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a1[i][j]=10;
            cout<<a1[i][j]<<" ";
        }
    }

    //2. Array of pointers
    int * a2[m];
    for(int i=0;i<m;i++){
        a2[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a2[i][j]=10;
            cout<<a2[i][j]<<" ";
        }
    }

    //3. Array of vectors
        /*not as cache friendly as simple 2D arrays
        individual rows are of dynamic sizes
        easy to pass to a function*/
    vector<int> a3[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a3[j].push_back(10);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a3[i][j]<<" ";
        }
    }

    //4. Vector of vectors (no. of rows can be dynamic)
    vector<vector<int>> a4;
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(10);
        }
        a4.push_back(v);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a4[i][j]<<" ";
        }
    }

    return 0;
}