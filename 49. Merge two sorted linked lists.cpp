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

//T.C.: O(m+n) & A.S.: O(1)
Node* sortedMerge(Node* a, Node* b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    Node* head=NULL, *tail=NULL;
    if(a->data <= b->data){
        head=tail=a;
        a=a->next;
    }
    else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data <= b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)
        tail->next=b;
    else
        tail->next=a;
    return head;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(30);
    head->next->next=new Node(20);
    head->next->next->next=new Node(50);
    head->next->next->next->next=new Node(60);
    
    return 0;
}