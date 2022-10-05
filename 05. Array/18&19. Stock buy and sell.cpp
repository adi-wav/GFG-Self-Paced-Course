// Approach 1(Naive)
//Time complexity: O(n);
#include<iostream>
using namespace std;
int maxProfit(int price[],int st,int end){
    if(end<=st)
        return 0;
    int profit=0;
    for(int i=st;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(price[j]>price[i]){
                int curr_profit=price[j]-price[i]+maxProfit(price,st,i-1)+maxProfit(price,j+1,end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxProfit(a,0,n-1);
    return 0;
}

//Approach 2
//Time complexity: theta(n)
#include<iostream>
using namespace std;
int maxProfit(int a[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            profit+=(a[i]-a[i-1]);
        }
    }
    return profit;
}
int main(){
       int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxProfit(a,n);
    return 0;
}