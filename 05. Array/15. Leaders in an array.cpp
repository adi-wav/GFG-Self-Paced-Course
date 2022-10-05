//Leaders in an array: An element is called leader if there is nothing greater than it on the right of it. For eg: {7,10,4,6,5,2} => Leaders={10,6,5,2}

//Approach 1(naive):
//time complexity: theta(n2)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        bool out=true;
        for(int j=i+1;j<n;j++){
            if(a[j]>=a[i]){
                out=false;
                break;
            }
        }
        if(out)
        cout<<a[i]<<" ";
    }
    return 0;
}

//Approach 2:(but it will print the leaders in reverse order)
//time complexity: theta(n)
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<a[n-1]<<" ";
    int max=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            cout<<a[i]<<" ";
            max=a[i];
        }
    }
    return 0;
}