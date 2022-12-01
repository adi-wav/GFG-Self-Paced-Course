//We have to delete a node whose pointer is given and you are not given even the head pointer of LL. the node to be deleted will never be the last node.
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
void deleteNode(Node* ptr){
    Node* temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
}


int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    deleteNode(head->next);
    return 0;
}