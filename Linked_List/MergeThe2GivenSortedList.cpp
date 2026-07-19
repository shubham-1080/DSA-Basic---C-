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
Node* mergeTheSortedList(Node* head1, Node* head2){
    Node* dummyheadnode = new Node(-1);
    Node* ptr = dummyheadnode;
    while(head1 && head2){
        if(head1->val< head2->val){
            ptr->next = head1;
            head1 = head1->next;
        }
        else{
            ptr->next = head2;
            head2 = head2->next;
        }
        ptr = ptr->next;
    }
    if(head1){
        ptr->next = head1;
    }
    else{
        ptr->next = head2;
    }
    return dummyheadnode->next;
}
int main(){
    int n, x;
    cout<<"Enter Size of first Linked List: ";
    cin>>n;
    LinkedList lt1;
    cout<<"Enter Element of first Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        lt1.insertAtTail(x);
    }
    cout<<"Enter Size of Second Linked List: ";
    cin>>n;
    LinkedList lt2;
    cout<<"Enter Element of Second Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        lt2.insertAtTail(x);
    }
    lt1.display();
    lt2.display();
    lt1.head = mergeTheSortedList(lt1.head, lt2.head);
    lt1.display();
    return 0;
}