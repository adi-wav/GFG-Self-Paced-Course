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
//Time complexity: O(n) & Auxilliary space: O(n)
void rprintList(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rprintList(head->next);
}

int main(){
    Node* head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    rprintList(head);
    return 0;
}