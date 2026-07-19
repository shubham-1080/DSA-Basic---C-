#include<iostream>
using namespace std;
class Node{
public: 
    int x;
    Node* next;

    Node(int data){
        x = data;
        next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    
    LinkedList(){
        head = NULL;
    }
    
    void insertAtTail(int val){
        Node* new_node = new Node(val);
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
            cout<<temp->x<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        return;
    }
};
void reverseLinkedList(Node* &head){
    if(head == NULL || head->next == NULL) return;
    Node* temp = head;
    Node* newhead = head->next;
    reverseLinkedList(newhead);
    temp->next->next = temp;
    temp->next = NULL;
    head = newhead;
    return;

}
int main(){
    int n,x;
    cout<<"Enter Size of Linked List: ";
    cin>>n;
    LinkedList lt;
    cout<<"Enter Element of Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        lt.insertAtTail(x);
    }
    lt.display();
    reverseLinkedList(lt.head);
    lt.display();
    return 0;
}