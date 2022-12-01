#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
//two traversal and extra space
Node* revLL(Node* head){
    vector<int> a;
    for(Node* curr=head;curr!=NULL;curr=curr->next){
        a.push_back(curr->data);
    }
    for(Node* curr=head;curr!=NULL;curr=curr->next){
        curr->data=a.back();
        a.pop_back();
    }
    return head;
}

//Efficient solution
//Time complexity: O(n)
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev; //prev is new head
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(45);
    int n; cin>>n;
    revLL(head);
    return 0;
}