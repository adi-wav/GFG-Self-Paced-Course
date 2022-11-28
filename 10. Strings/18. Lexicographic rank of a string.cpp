//Basically find the rank of word in the dictionary
#include<iostream>
using namespace std;
const int CHAR=256;

//Time complexity: O(CHAR+n+CHAR+n*CHAR) = O(n*CHAR) = O(n) & Auxilliary space: O(CHAR)
int lexRank(string &s){
    int res=1;
    int n=s.length();
    int mul=fact(n);
    int count[CHAR]={0};
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    for(int i=1;i<CHAR;i++){
        count[i]+=count[i-1];
    }
    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=res+count[s[i]-1]*mul;
        for(int j=s[i];j<CHAR;j++){
            count[j]--;
        }
    }
    return res;
}
int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}

int main(){
    
    return 0;
}