#include<iostream>
using namespace std;

/* -> like naive algorithm, slide the pattern one by one
   -> compare hash valuesof pattern and current text window. if hash value match, then only compare individual characters.
hash value: sum of all the characters in a set.
if the hash value matches but the characters dont then it is called spurious hit.
Rolling Hash: getting the hash value of next window with the help of previous
Ti+1 = Ti + TXT[i+m]-TXT[i] {m:length of pattern}*/

/*Improved hash: in this we multiply the value of character with a number
For eg: h("abc")=1xd^2 + 2xd^1 + 3xd^0
        h("dab")=4xd^2 + 1xd^1 + 2xd^0
Rolling hash: Ti+1 = d(Ti - TXT[i]xd^m-1) + TXT[i+m] {m:length of pattern}
*/
//this algo is generally used for cases when multiple patterns are present in the text
//Time complexity: O((n-m+1)*m) -> for worst case
void RBSearch(string &pat, string &txt, int m, int n){
    //compute (d^m-1)%q;
    int h=1;
    int d,q; //d is some random number and q is some large prime number
    for(int i=1;i<=m-1;i++){
        h=(h*d)%q;
    }
    //compute p and to
    int p=0,t=0;
    for(int i=0;i<m;i++){
        p=(p*d + pat[i])%q;
        t=(t*d + txt[i])%q;
    }
    for(int i=0;i<=n-m;i++){
        //check for various spurious hits
        if(p==t){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(txt[i+j]!=pat[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==true)
                cout<<i<<" ";
        }
        //compute ti+1 using ti
        if(i<n-m){
            t=(d*(t-txt[i]*h) + txt[i+m])%q;
            if(t<0)
                t=t+q;
        }
    }
}

int main(){
    string txt,pat;
    cin>>txt>>pat;
    int m=pat.length();
    int n=txt.length();
    RBSearch(txt,pat,m,n);
    return 0;
}