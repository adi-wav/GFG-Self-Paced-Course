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
//Naive solution
Node* delHead(Node* head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=head->next;
    delete head;
    return curr->next;
}

//Efficient approach
Node* delHead(Node* head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node* temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head;
    int x; cin>>x;
    delHead(head);
    return 0;
}