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
//Recursive solution
//Time complexity: O(n) & Auxilliary space: O(n/k)
Node* reverse(Node* head, int k){
    Node* curr=head, *next=NULL, *prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node* rest_head=reverse(next,k);
        head->next=rest_head;
    }
    return prev;
}

//Iterative solution
Node* reverseK(Node* head, int k){
    Node* curr=head, *prevFirst=NULL;
    bool isFirstPass=true;
    while(curr!=NULL){
        Node* first=curr, *prev=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isFirstPass){
            head=prev;
            isFirstPass=false;
        }
        else{
            prevFirst->next=prev;
            prevFirst=first;
        }
    }
    return head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(40);
    int k; cin>>k;
    reverseK(head,k);
    return 0;
}