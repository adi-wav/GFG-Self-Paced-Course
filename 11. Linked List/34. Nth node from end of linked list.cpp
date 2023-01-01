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
//Method 1(Using length of linked list)
void printNthFromEnd(Node* head, int n){
    int len=0;
    for(Node* curr=head;curr!=NULL;curr=curr->next){
        len++;
    }
    if(len<n)
        return;
    Node* curr=head;
    for(int i=1;i<len-n+1;i++){
        curr=curr->next;
    }
    cout<<curr->data<<" ";
}

//Method 2(Using two pointers)
//1. move 'first' pointer n positions ahead
//2. now put 'second' pointer at head
//3. move both 'first' and 'second' pointer at same speed. when 'first' reaches null the 'second' pointer is at required position
void printNthFromEnd(Node* head, int n){
    if(head==NULL)
        return;
    Node* first=head;
    for(int i=0;i<n;i++){
        if(first==NULL)
            return;
        first=first->next;
    }
    Node* second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(45);
    int n; cin>>n;
    printNthFromEnd(head,n);
    return 0;
}