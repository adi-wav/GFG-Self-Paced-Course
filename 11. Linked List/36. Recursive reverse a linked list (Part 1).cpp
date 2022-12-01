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
Node* recRev(Node* head){
    if(head==NULL || head->next==NULL)
        return head;
    Node* rest_head=recRev(head->next);
    Node* rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(45);
    int n; cin>>n;
    recRev(head);
    return 0;
}
