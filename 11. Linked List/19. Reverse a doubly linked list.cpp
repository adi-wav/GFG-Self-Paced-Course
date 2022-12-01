#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
Node* reverseDLL(Node* head){
    if(head==NULL || head->next==NULL)
        return head;
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}
int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);
    head->next=temp1;
    temp1->prev;
    temp1->next=temp2;
    temp2->prev=temp1;
    reverseDLL(head);
    return 0;
}