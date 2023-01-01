#include<iostream>
using namespace std;

//Simple Implementation
struct Deque{
    int size,cap;
    int *arr;
    Deque(int c){
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
    void insertFront(int x){
        if(isFull())
            return;
        for(int i=1;i<=size;i++){
            arr[i]=arr[i-1];
        }
        arr[0]=x;
        size++;
    }
    void insertRear(int x){
        if(isFull())
            return;
        arr[size]=x;
        size++;
    }
    void deleteFront(){
        if(isEmpty())
            return;
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    void deleteRear(){
        if(isEmpty())
            return;
        size--;
    }
    int getFront(){
        if(isEmpty())
            return;
        else
            return 0;
    }
    int getRear(){
        if(isEmpty())
            return -1;
        else
            return (size-1);
    }
};

//Efficient Implementation
struct Deque{
    int size,cap,front;
    int *arr;
    Deque(int c){
        cap=c;
        size=0;
        front=0;
        arr=new int[cap];
    }
    bool isFull(){
        return (size==cap);
    }
    bool isEmpty(){
        return (size==0);
    }
    void insertFront(int x){
        if(isFull())    
            return;
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    void deleteFront(){
        if(isEmpty())
            return;
        front=(front+1)%cap;
        size--;
    }
    int getFront(){
        if(isEmpty())
            return -1;
        else
            return front;
    }
    void insertRear(int x){
        if(isFull())
            return;
        int new_rear=(front+size)%cap;
        arr[new_rear]=x;
        size++;
    }
    void deleteRear(){
        if(isEmpty())
            return;
        size--;
    }  
    int getRear(){
        if(isEmpty())
            return -1;
        else
            return (front+size-1)%cap;
    }
};
//Rear is always (front + size - 1)%cap
int main(){
    
    return 0;
}