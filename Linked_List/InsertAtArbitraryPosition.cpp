#include<iostream>
using namespace std;
class Node {
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
void insertAtArbitraryPosition(Node* &head,int val,int position){
    if(position==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int cp = 0;
    while(cp != position-1){
        temp = temp->next;
        cp++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return;
}
void Updation(Node* &head,int val, int position){
    Node* temp = head;
    int current_position =0;
    while(current_position != position){
        temp = temp->next;
        current_position++;
    }
    temp->value = val;
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
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return;
}
void deleteAtTail(Node* &head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = NULL;
    free(temp1);
    return;
}
void deleteAtArbitraryPosition(Node* head, int position){
    if(position==0){
        deleteAtHead(head);
        return;
    }
    Node* temp=head;
    int current_position =0;
    while(current_position != position-1){
        temp = temp->next;
        current_position++;
    }
    Node* temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);
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
    insertAtArbitraryPosition(head,23,3);
    insertAtArbitraryPosition(head,20,2);
    display(head);
    Updation(head,50,3);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtArbitraryPosition(head, 2);
    display(head);

    return 0;
}