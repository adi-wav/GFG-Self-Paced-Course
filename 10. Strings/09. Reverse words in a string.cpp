#include<iostream>
using namespace std;

//Naive method
/* -> create a stack
-> push words one by one to the stack
-> pop words from the stack and append to output */

//Better approach
/* -> first reverse the individual words
   -> then reverse the whole string*/
void reverseWords(char s[], int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }
    }
    reverse(s,start,n-1); //reversing the last word because it does not have space at its end
    reverse(s,0,n-1); //reversing whole string
}
void reverse(char s[], int low, int high){
    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
int main(){
    string s; cin>>s; //pass a statement
    getline(cin,s);
    return 0;
}