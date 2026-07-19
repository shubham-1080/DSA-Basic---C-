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
            temp = temp ->next;
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
void remove(Node* &head, int k){
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(k){
        ptr1 = ptr1->next;
        k--;
    }
    if(ptr1 == NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    while(ptr1->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    Node* temp = ptr2->next;
    ptr2->next = ptr2->next->next;
    delete temp;
    return;
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
    int k;
    cout<<"Enter Value of k: ";
    cin>>k;
    remove(lt.head, k);
    lt.display();
    return 0;
}