#include<iostream>
using namespace std;
//Every operation is O(1)
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Queue{
    Node* front, * rear;
    int size;
    Queue(){
        front=NULL;
        rear=NULL;
        size=0;
    }
    void enqueue(int x){
        Node* temp= new Node(x);
        size++;
        if(front==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void dequeue(){
        if(front==NULL)
            return;
        size--;
        Node* temp=front;
        front=front->next;
        if(front==NULL)
            rear=NULL;
        delete(temp);
    }
    int getFront(){
        if(front==NULL)
            return -1;
        return front->data;
    }
    int getRear(){
        if(front==NULL)
            return -1;
        return rear->data;
    }
    int getSize(){
        return size;
    }
};

int main(){
    
    return 0;
}