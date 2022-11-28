#include<iostream>
using namespace std;
const int CHAR=256;
//Naive solution
//Time complexity: O((n-m+1)*m)
bool isPresent(string &txt, string &pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++){
        if(areAnagram(pat,txt,i))
            return true;
    }
    return false;
}
bool areAnagram(string &pat, string &txt, int i){
    int count[CHAR]={0};
    for(int j=0;j<txt.length();j++){
        count[pat[i]]++;
        count[txt[i+j]]--;
    }
    for(int j=0;j<CHAR;j++){
        if(count[j]!=0)
            return false;
    }
    return true;
}

//Efficient approach
//Time complexity: O(m+(n-m)*CHAR) & Auxilliary space: theta(CHAR)
bool isPresent(string &pat, string &txt){
    int CT[CHAR]={0}, CP[CHAR]={0};
    for(int i=0;i<pat.length();i++){
        CT[txt[i]]++;
        CP[pat[i]]++;
    }
    for(int i=pat.length();i<txt.length();i++){
        if(areSame(CT,CP))
            return true;
        CT[txt[i]]++;
        CT[txt[i-pat.length()]]--;
    }
    return false;
}
bool areSame(int a[CHAR], int b[CHAR]){
    for(int i=0;i<CHAR;i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main(){
    string pat,txt; cin>>pat>>txt;
    cout<<isPresent(pat,txt);
    return 0;
}