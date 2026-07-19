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
Node* swapAdjacentElement(Node* &head){
    if(head == NULL || head->next == NULL) return head;
    Node* secondnode = head->next;
    head->next = swapAdjacentElement(secondnode->next);
    secondnode->next = head;
    return secondnode; 
}
int main(){
    int n, x;
    cout<<"Enter Size of Linked List: ";
    cin>>n;
    LinkedList lt;
    cout<<"Enter Element of Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        lt.insertAtTail(x);
    }
    lt.display();
    lt.head = swapAdjacentElement(lt.head);
    lt.display();
    return 0;
}