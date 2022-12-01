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
//Iterative solution
int searchLL(Node* head, int x){
    Node* curr=head;
    int i=1;
    while(curr!=NULL){
        if(curr->data==x){
            return i;
        }
        i++;
        curr=curr->next;
    }
    return -1;
}
//Recursive solution
int searchLL(Node* head, int x){
    if(head==NULL)
        return -1;
    if(head->data==x)
        return 1;
    else{
        int res=searchLL(head->next,x);
        if(res==-1)
            return -1;
        else
            return (res+1);
    }
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(40);
    int x; cin>>x;
    cout<<searchLL(head,x);
    return 0;
}