#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
//Time complexity: O(n)
bool isLoop(Node* head){
    Node* slow_p=head, *fast_p=head;
    while(fast_p!=NULL && fast_p->next!=NULL){
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p==fast_p)
            return true;
    }
    return false;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head->next;
    cout<<isLoop(head);
    return 0;
}

/*Points to note:
    - fast enters into the loop before(or at the same time as slow)
    - let fast be k distance ahead of slow when slow enters the loop where k>=0
    - the distance keeps on increasing by one in every movement of both pointers
    - when distance becomes length of cycle, they meet*/