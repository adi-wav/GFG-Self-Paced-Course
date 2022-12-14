#include<iostream>
using namespace std;

//Time complexity: O((n-m+1)*m)
void patSearching(string &txt, string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==m)
            cout<<i<<" ";
    }
}

int main(){
    string txt,pat;
    cin>>txt>>pat;
    patSearching(txt,pat);
    return 0;
}