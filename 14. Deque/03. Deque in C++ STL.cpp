#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq={10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x:dq)
        cout<<x<<" ";
    //o/p: 5 10 20 30 50
    cout<<dq.front()<<" "<<dq.back();
    //o/p: 5 50
    auto it=dq.begin();
    it++;
    dq.insert(it,25); //5 25 10 20 30 50
    return 0;
}