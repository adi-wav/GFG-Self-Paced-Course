//Stack can be implemented on any underlying container that provides following operations:
/*
    back()
    size()
    empty()
    push_back()
    pop_back()
*/
//List, vector, deque provide all these conditions.
//Stack is a container adapter.
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}