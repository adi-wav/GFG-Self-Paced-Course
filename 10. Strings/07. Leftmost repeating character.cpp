#include<iostream>
using namespace std;

//Naive approach
//Time complexity: O(n2)
int leftMost(string &s){
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j])
                return i;
        }
    }
    return -1;
}

//Better approach
const int CHAR=256;
int leftMost(string &s){
    int count[CHAR]={0};
    for(int i=0;i<s.length();i++){
        if(count[s[i]]>1)
            return i;
    }
    return -1;
}

//Efficient approach 1
//Time complexity: O(CHAR + n)
const int CHAR = 256;
int leftMost(string &s){
    int fIndex[CHAR];
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT16_MAX;
    for(int i=0;i<s.length();i++){
        int fi=fIndex[s[i]];
        if(fi==-1)
            fIndex[s[i]]=i;
        else
            res=min(res,fi);
    }
    return (res==INT16_MAX)?-1:res;
}

//Efficient approach 2
//Time complexity: O(CHAR)
const int CHAR=256;
int leftMost(string &s){
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=s.length()-1;i>=0;i--){
        if(visited[s[i]])
            res=i;
        else
            visited[s[i]]=true;
    }
    return res;
}

int main(){
    string s; cin>>s;
    cout<<leftMost(s);
    return 0;
}