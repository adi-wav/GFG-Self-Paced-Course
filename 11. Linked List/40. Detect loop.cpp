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
//Method 1: Naive - O(n2) => For ith element check for the previous i elements is there exists a node which is next of it.
//Method 2: If modifications to linked list structure are allowed - O(n) => add a bool visited in the structure
struct Node{
    int data;
    Node* next;
    bool visited;
    Node(int x){
        data=x;
        next=NULL;
        visited=false;
    }
};
//Method 3: Modifications to linked list pointer - O(n) => here we make a dummy node and as we traverse the linked list we point the node traversed node to that dummy node and then when we find a node already pointing to the dummy node we stop there.
//but in this method linked list is destroyed
bool isLoop(Node* head){
    Node* temp=new Node(0);
    Node* curr= head;
    while(curr!=NULL){
        if(curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        Node* curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;
}
//Method 4: Haashing => Aur hashing to humko aati nhi (:)