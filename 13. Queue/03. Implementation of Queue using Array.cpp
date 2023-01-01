#include<iostream>
using namespace std;

//Simple implementation
struct Queue{
    int size, cap;
    int *arr;
    Queue(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isFull(){
        return (size==cap);
    }
    bool isEmpty(){
        return (size==0);
    }
    void enqueue(int x){
        if(isFull())
            return;
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isEmpty())
            return;
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    int getFront(){
        if(isEmpty())
            return -1;
        else
            return 0;
    }
    int getRear(){
        if(isEmpty())
            return -1;
        else
            return size-1;
    }
};

//Efficient implementation(Circular Array)
struct Queue{
    int *arr;
    int front,cap,size;
    Queue(int c){
        arr=new int[c];
        cap=c;
        front=0;
        size=0;
    }
    bool isFull(){
        return (cap==size);
    }
    bool isEmpty(){
        return (size==0);
    }
    int getFront(){
        if(isEmpty())
            return -1;
        else
            return front;
    }
    int getRear(){
        if(isEmpty())
            return -1;
        else
            return (front+size-1)%cap;
    }
    void enqueue(int x){
        if(isFull())
            return;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void dequeue(){
        if(isEmpty())
            return;
        front=(front+1)%cap;
        size--;
    }
};

int main(){
    
    return 0;
}