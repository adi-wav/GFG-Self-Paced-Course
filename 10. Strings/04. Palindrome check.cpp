#include<bits/stdc++.h>
using namespace std;

//Naive method
//Time complexity: theta(n) & Auxilliary space: theta(n)
bool isPal(string &str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}

//Efficient method
//Time complexity: O(n)
bool isPal(string &str){
    int begin=0;
    int end=str.length()-1;
    while(begin<end){
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

int main(){
    string s; cin>>s;
    cout<<isPal(s);
    return 0;
}