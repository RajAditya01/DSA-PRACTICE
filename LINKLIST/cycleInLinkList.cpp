#include <iostream>
using namespace std;

void makeCycle(Node* &head, int pos){
    Node* temp=head;
    Node* startNode;

    int count=1;
    while (temp->next!=NULL)
    {
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next=startNode;
    
}

bool detectCycle(Node* &head){

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

int main()
{

    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makeCycle(head,3);
    display(head);

    return 0;
}