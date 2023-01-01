#include<iostream>
using namespace std;

struct MyStack{
    int *a;
    int cap;
    int top;
    MyStack(int c){
        cap=c;
        a=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1)
            return -1;
        top++;
        a[top]=x;
    }
    int pop(){
        if(top==-1)
            return -1;
        int res=a[top];
        top--;
        return res;
    }
    int peek(){
        if(top==-1)
            return -1;
        return a[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return (top==-1);
    }
};

struct MyStack{
    vector<int> v;
    void push(int x){
        v.push_back(int x);
    }
    int pop(){
        int res=v.back();
        v.pop_back;
        return res;
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty()
    }
    int peek(){
        return v.back();
    }
}

int main(){
    
    return 0;
}