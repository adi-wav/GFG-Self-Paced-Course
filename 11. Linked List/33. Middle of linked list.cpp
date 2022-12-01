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
//two traversals
void printMiddle(Node* head){
    if(head==NULL)
        return;
    int count=0;
    Node* curr;
    for(curr=head;curr!=NULL;curr=curr->next){
        count++;
    }
    curr=head;
    for(int i=0;i<count/2;i++){
        curr=curr->next;
    }
    cout<<curr->data;
}

//Efficient solution
//one traversal
void printMiddle(Node* head){
    if(head==NULL)
        return;
    Node* slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(45);
    int k; cin>>k;
    printMiddle(head);
    return 0;
}