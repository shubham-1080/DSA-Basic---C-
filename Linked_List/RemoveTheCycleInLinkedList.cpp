#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void insertAtTail(int x){
        Node* new_node = new Node(x);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
        return;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        return;
    }
};
void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);
    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL; 
    return;
}
int main(){
    LinkedList lt;
    lt.insertAtTail(1);
    lt.insertAtTail(2);
    lt.insertAtTail(3);
    lt.insertAtTail(4);
    lt.insertAtTail(5);
    lt.insertAtTail(6);
    lt.insertAtTail(7);
    lt.insertAtTail(8); 
    lt.head->next->next->next->next->next->next->next->next = lt.head->next->next;
    removeCycle(lt.head);
    lt.display();
    return 0;
}