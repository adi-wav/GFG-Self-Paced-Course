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
void detectRemoveLoop(Node* head){
    Node* slow=head, *fast=head;
    //detection
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow!=fast)
        return;
    //removal
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head->next;
    detectRemoveLoop(head);
    return 0;
}

/*Variation: 1. Find the length of loop. => when the loop is detected just take another pointer and traverse it in the loop and count.
             2. Find first node of loop. => make the slow pointer as head and then move slow and fast one by one and at end they will meet at the starting of node.*/