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

void insertAtHead(Node* &head, int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

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
void deleteAtHead(Node* &head){
    Node *todelete = head;
    head=head->next;

    delete todelete;
}

void deletion(Node* &head, int val){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    Node* temp=head;
    while (temp->next->data != val){
        temp=temp->next;
    }
    Node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}


int main(){

    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);


    //Deletion
    deleteAtHead(head);
    display(head);

    return 0;
}