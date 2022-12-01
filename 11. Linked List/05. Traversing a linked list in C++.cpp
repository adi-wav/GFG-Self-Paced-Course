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

void printList(Node* head){
    if(head==NULL)
        cout<<"Empty LL";
        return;
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data;
        curr=curr->next;
    }
}

int main(){
    Node* head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head); //Output:10
    printList(head); //Output:10{the pointer that is passed in the function different from the pointer in main function}
    return 0;
}