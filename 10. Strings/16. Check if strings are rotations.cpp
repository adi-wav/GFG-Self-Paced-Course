#include<iostream>
using namespace std;

//Time complexity: O(n)
bool areRotations(string &s1, string &s2){
    if(s1.length()!=s2.length())
        return false;
    return ((s1+s1).find(s2)!=string::npos);
}

int main(){
    string s1, s2; cin>>s1>>s2;
    areRotations(s1,s2);
    return 0;
}