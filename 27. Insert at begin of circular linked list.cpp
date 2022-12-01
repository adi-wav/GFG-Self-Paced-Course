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
//Naive approach
Node* insertHead(Node* head, int x){
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        Node* curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}
//Efficient approach 1
//Take a tail pointer as argument in the function and then tail->next=temp; temp->next=head; that's it.

//Efficient approach 2
//here we are adding the node next to head then swapping the values of head and newly added node
Node* insertHead(Node* head, int x){
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        //Swapping data
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        //
        return head;
    }
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head;
    int x; cin>>x;
    insertHead(head,x);
    return 0;
}