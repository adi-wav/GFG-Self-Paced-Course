#include<iostream>
#include<queue>
using namespace std;

struct myDS{
    deque<int>dq;
    void insertMin(int x){
        dq.push_front(x);
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMin(){
        return dq.front();
    }
    int getMax(){
        return dq.back();
    }
    void extractMin(){
        return dq.pop_front();
    }
    void extractMax(){
        return dq.pop_back();
    }
};

int main(){
    
    return 0;
}