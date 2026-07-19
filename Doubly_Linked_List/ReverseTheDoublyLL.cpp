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
};
void reverse(Node* &head, Node* &tail){
    if(head == NULL || head == tail){
        return;
    }
    Node* curr = head;
    while(curr != NULL){
        // Node* temp = curr->next;
        // curr->next = curr->prev;
        // curr->prev = temp;
        // curr = temp;
        swap(curr->next,curr->prev);
        curr = curr->prev;
    }
    curr = tail;
    tail = head;
    head = curr;
    return;
}
int main(){
    int n, x;
    cout<<"Enter Size of Element: ";
    cin>>n;
    DoublyLinkedList dll;
    cout<<"Enter Element of Doubly Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        dll.insertAtTail(x);
    }
    dll.display();
    reverse(dll.head,dll.tail);
    dll.display();
    return 0;
}