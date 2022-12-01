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
//Time complexity: theta(pos)
Node* sortedInsert(Node* head, int k){
    Node* temp=new Node(k);
    if(head==NULL)
        return temp;
    if(k<head->data)
        temp->next=head;
        return temp;
    Node* curr=head;
    while(curr->next->data<k && curr->next!=NULL){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(45);
    int k; cin>>k;
    sortedInsert(head,k);
    return 0;
}