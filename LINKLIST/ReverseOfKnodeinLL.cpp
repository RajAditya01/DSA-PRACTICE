#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
   
    //Constructor
    Node (int val){
        data = val;
        next = NULL; 
    }
};

void insertAtTail(Node* &head, int val){
    Node* n =new Node(val);

    if (head==NULL){
        head=n;
        return;
    }

    Node* temp =head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=n;

}

void display(Node* head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* reversek(Node* &head,int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    int count=0;
    while (currptr!=NULL &&count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr !=NULL){  
    head->next =reversek(nextptr,k);
    }

    return prevptr;
    
}


int main(){

    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    
    display(head);
    int k=2;
    Node* newhead=reversek(head,k);
    display(newhead);

    return 0;
}

//TIME COMPLEXITY = O(N)