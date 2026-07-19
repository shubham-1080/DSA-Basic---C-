#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;

    Node(int data){
        value = data;
        next = NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    return;
}
void insertAtTail(Node* &head, int val){
    // If list is empty
    if(head == NULL){
        head = new Node(val);
        return;
    }
    Node* temp(head);
    while(temp->next !=NULL){
        temp = temp->next;
    }
    Node* new_node= new Node(val);
    temp->next = new_node;
    new_node->next = NULL;   // this is not needed because by default i set next = NULL in my constructor
    return; 
}
void display(Node* &head){
    Node* temp(head);
    while(temp !=NULL){
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
    Node* head(NULL);
    insertAtHead(head,33);
    display(head);
    insertAtHead(head,12);
    display(head);
    insertAtTail(head,56);
    insertAtTail(head,89);
    display(head);

    return 0;
}