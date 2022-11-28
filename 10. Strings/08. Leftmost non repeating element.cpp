#include<iostream>
using namespace std;

//Naive solution
//Time complexity: O(n2)
int nonRep(string &s){
    for(int i=0;i<s.length();i++){
        bool flag=false;
        for(int j=0;j<s.length();j++){
            if(i!=j && s[i]==s[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)
            return i;
    }
    return -1;
}

//Better solution(two traversals)
//Time complexity: O(n)
const int CHAR=256;
int nonRep(string &s){
    int count[CHAR]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]==1)
            return i;
    }
    return -1;
}

//Efficient solution(one traversal)
//It can handle the stream of data like if the data is coming continuously
//Time complexity: O(n)
const int CHAR=256;
int nonRep(string &s){
    int fI[CHAR];
    fill(fI,fI+CHAR,-1);
    for(int i=0;i<s.length();i++){
        if(fI[s[i]]==-1)
            fI[s[i]]=i;
        else
            fI[s[i]]=-2;
    }
    int res=INT16_MAX;
    for(int i=0;i<CHAR;i++){
        if(fI[i]>=0)
            res=min(res,fI[i]);
    }
    return (res==INT16_MAX)?-1:res;
}

int main(){
    string s; cin>>s;
    cout<<nonRep(s);
    return 0;
}