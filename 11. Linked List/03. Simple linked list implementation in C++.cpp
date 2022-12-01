//A node is of 8 byte, 4 for the data and the other 4 for its address
//First node is called head and can be used to represent the whole linked list
//The next of last node is declared NULL
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    //OR
    head->next->next=new Node(30);
    return 0;
}