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
//Method 1
/* 1. create a hash map hm
   2. for(curr=h1;curr!=NULL;curr=curr->next){
        hm[curr]=new Node(curr->data);
   }
      for(curr=h1;curr!=NULL;curr=curr->next){
        cloneCurr=hm.find(curr);
        cloneCurr-next=hm(curr->next);
        cloneCurr->random=hm(curr->random);
      }
      h2=hm[h1];*/

//Method 2
/*
for(curr=h1;curr!=NULL){
    next=curr->next;
    curr->next=new Node(curr->data);
    curr->next->next=next;
    curr=next;
}
for(curr=h1;curr!=NULL;curr=curr->next->next){
    curr->next->random=(curr->random!=NULL)?curr->random->next:NULL;
}*/
//then make a new linked list and add only alternate nodes(new ones)

int main(){
    Node* head=new Node(10);
    head->next=new Node(30);
    head->next->next=new Node(20);
    head->next->next->next=new Node(50);
    head->next->next->next->next=new Node(60);
    
    return 0;
}