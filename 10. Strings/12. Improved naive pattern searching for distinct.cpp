#include<iostream>
using namespace std;

//Time complexity: theta(n) [because it goes total n times for a value]
void patSearchDist(string txt, string pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;){
        int j;
        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==m)
            cout<<i<<" ";
        if(j==0)
            i++;
        else
            i=i+j;
    }
}

int main(){
    string txt,pat;
    cin>>txt>>pat;
    patSearchDist(txt,pat);
    return 0;
}