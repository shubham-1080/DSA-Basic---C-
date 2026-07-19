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
class CircularLinkedList{
public:
    Node* head;
    CircularLinkedList(){
        head = NULL;
    }
    void display(){
        if(head == NULL){
            cout << "List is Empty\n";
            return;
        }
        Node* temp = head;
        do{
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }while(temp != head);
        cout<<"Head"<<endl;
        return;
    }
    void insertAtHead(int x){
        Node* new_node = new Node(x);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        head = new_node;
        return;
    }
    void insertAtTail(int x){
        Node* new_node = new Node(x);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        return;
    }
    void insertAtArbitraryPosition(int x, int k){
        if(k==1){
            insertAtHead(x);
            return;
        }
        Node* new_node = new Node(x);
        Node* temp = head;
        while(k>2 && temp->next != head){
            temp = temp->next;
            k--;
        }
        if(k>2){
            cout<<"Invalid Position"<<endl;
            delete new_node;
            return;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        return;
    }
    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        Node* ptr = head;
        head = head->next;
        temp->next = head;
        delete ptr;
        return;
    }
    void deleteAtTail(){
        if(head == NULL){
            return;
        }
        if(head->next == head){
            deleteAtHead();
            return;
        }
        Node* temp = head;
        while(temp->next->next != head){
            temp = temp->next;
        }
        Node* ptr = temp->next;
        temp->next = head;
        delete ptr;
        return;
    }
    void deleteAtArbitraryPosition(int k){
        if(head == NULL){
            return;
        }
        if(k==1){
            deleteAtHead();
            return;
        }
        Node* temp = head;
        while(k>2 && temp->next != head){
            temp = temp->next;
            k--;
        }
        if(k>2){
            cout<<"Invalid Position"<<endl;
            return;
        }
        Node* ptr = temp->next;
        temp->next = temp->next->next;
        delete ptr;
        return;
    }
};

int main(){
    CircularLinkedList cll;
    cll.insertAtHead(5);
    cll.insertAtHead(4);
    cll.insertAtHead(6);
    cll.display();
    cll.insertAtTail(12);
    cll.insertAtTail(90);
    cll.display();
    cll.insertAtArbitraryPosition(45,3);
    cll.insertAtArbitraryPosition(67,1);
    cll.display();
    cll.deleteAtHead();
    cll.display();
    cll.deleteAtTail();
    cll.display();
    cll.deleteAtArbitraryPosition(8);
    cll.deleteAtArbitraryPosition(3);
    cll.display();
    return 0;
}