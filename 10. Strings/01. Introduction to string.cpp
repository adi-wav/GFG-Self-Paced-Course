/*-> Sequence of characters
-> Small set
-> Contiguous integer values from 'a' to 'z' and 'A' to 'Z' in ASCII.*/

//Example Problem: Print frequencies of characters(in sorted order) in a string of lower case alphabets
#include<iostream>
using namespace std;

int main(){
    string str="geeksforgeeks";
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<(char)(i+'a')<<" "<<count[i]<<endl;
        }
    }
    return 0;
}