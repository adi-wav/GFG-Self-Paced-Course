//Given a number n, print first n numbers(in increasing order) such that all these numbers have digits in set {5,6}.
// i/p: n=10
// o/p: 5,6,55,56,65,66,555,556,565,566

#include<iostream>
#include<queue>
using namespace std;

void printFirstN(int n){
    queue<string>q;
    q.push("5");
    q.push("6");
    for(int count=0;count<n;count++){
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}

int main(){
    
    return 0;
}