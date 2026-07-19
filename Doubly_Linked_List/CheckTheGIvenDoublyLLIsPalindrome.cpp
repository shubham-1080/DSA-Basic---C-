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
bool isPalindrome(Node* head, Node* tail){
    while(head != tail && head->prev != tail){
        if(head->val != tail->val) return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
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
    cout<<isPalindrome(dll.head,dll.tail);
    return 0;
}