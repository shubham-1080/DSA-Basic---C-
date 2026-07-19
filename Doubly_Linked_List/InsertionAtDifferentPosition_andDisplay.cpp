#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};
class DoublyLinkedList{
public: 
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        return;
    }
    void insertAtHead(int x){
        Node* new_node = new Node(x);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
        return;
    }
    void insertAtTail(int x){
        Node* new_node = new Node(x);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
        return;
    }
    void insertAtArbitraryPosition(int x, int k){    // for 1- based indexing for 0 based k>1 and head k==0
        if(k==1){ 
            insertAtHead(x);
            return;
        }
        Node* new_node = new Node(x);
        Node* temp = head;
        while(k>2 && temp != NULL){
            temp = temp->next;
            k--;
        }
        if(temp == NULL){
            cout<<"Invalid Position\n";
            delete new_node;
            return;
        }
        new_node->prev = temp;
        new_node->next = temp->next;
        if(temp->next != NULL)
            temp->next->prev = new_node;
        else
            tail = new_node;

        temp->next = new_node;
        return;
    }
    void deleteTheHead(){
        if(head == NULL){
            return;
        }
        else if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }
    void deleteTheTail(){
        if(tail == NULL){
            return;
        }
        else if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        return;
    }
    void deletionAtArbitraryPosition(int k){
        if(head == NULL){
            return;
        }
        else if(k == 1){
            deleteTheHead();
            return;
        }
        Node* temp = head;
        while(k>1 && temp != NULL){
            temp = temp->next;
            k--;
        }
        if(temp == NULL){
            cout<<"Invalid Position\n";
            return;
        }
        if(temp->next == NULL){
            deleteTheTail();
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
        return;

    }

};
int main(){
    DoublyLinkedList dll;
    dll.insertAtHead(4);
    dll.insertAtHead(2);
    dll.insertAtHead(6);
    dll.insertAtHead(8);
    dll.display();
    dll.insertAtTail(9);
    dll.display();
    dll.insertAtHead(23);
    dll.display();
    dll.insertAtTail(12);
    dll.display();
    dll.insertAtArbitraryPosition(30,5);
    dll.display();
    dll.deleteTheHead();
    dll.display();
    dll.deleteTheTail();
    dll.display();
    dll.deletionAtArbitraryPosition(5);
    dll.display();
    return 0;
}