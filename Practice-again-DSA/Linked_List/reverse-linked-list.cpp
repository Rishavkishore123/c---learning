// Given the head of a linked list, the task is to reverse this list and return the reversed head.

// Examples:

// Input: Linked list: 1->2->3->4->5->6
// Output: 6->5->4->3->2->1

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* reversedList(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next= curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data <<"-> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head= new Node(1);
    head->next= new Node(2);
    head->next->next= new Node(3);
    head->next->next->next= new Node(4);

    cout<<"Original List:"<<endl;
    printList(head);
    
    head= reversedList(head);

    cout<<"reversedList:" <<endl;
    printList(head);
    return 0;

}