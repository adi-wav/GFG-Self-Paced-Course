//Previous of head is last node
//Next of last node is head
//We get all advanatages of circular and doubly linked lists
//We can access last node in constant time without maintaining extra tail pointer/reference
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
//Insert at head
Node* insertHead(Node* head, int x){
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}
//Insert at tail
Node* insertHead(Node* head, int x){
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return head;
}