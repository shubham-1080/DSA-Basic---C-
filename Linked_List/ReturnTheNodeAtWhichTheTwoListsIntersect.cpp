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
int length(Node* head){
    int count =0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
Node* intersect(Node* head1, Node* head2){
    int length1 = length(head1);
    int length2 = length(head2);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    if(length1 > length2){
        int k = length1 - length2;
        while(k){
            ptr1 = ptr1->next;
            k--;
        }
    }
    else{
        int k = length2 - length1;
        while(k){
            ptr2 = ptr2->next;
            k--;
        }
    }
    while(ptr1 != NULL){
        if(ptr1 == ptr2) return ptr1;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display();

    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.display();
    ll2.head->next->next = ll1.head->next->next->next;
    Node* intersection = intersect(ll1.head, ll2.head);
    if(intersection){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}