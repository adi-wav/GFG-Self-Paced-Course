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

//Method 1(Swapping data)
void pairWiseSwap1(Node* head){
    Node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next;
    }
}

//Method 2
Node* pairWiseSwap(Node* head){
    Node* curr=head->next->next;
    Node* prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        Node* next=curr->next->next;
        curr=next;
    }
    prev->next=curr;
    return head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(30);
    head->next->next=new Node(20);
    head->next->next->next=new Node(50);
    head->next->next->next->next=new Node(60);
    pairWiseSwap(head);
    return 0;
}