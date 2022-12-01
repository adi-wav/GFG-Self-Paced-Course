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
Node* recRev(Node* curr, Node* prev){
    if(curr=NULL)
        return prev;
    Node* next=curr->next;
    curr->next=prev;
    return recRev(next,curr);
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(45);
    Node* prev=NULL;
    Node* curr=head;
    recRev(curr,prev);
    return 0;
}