#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next= NULL;
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
        while(temp->next !=NULL){
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
bool checkEqual(Node* head1, Node* head2){
    Node* temp1= head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 !=NULL){
        if(temp1->val != temp2->val) return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1 != NULL || temp2 !=NULL) return false;
    return true;
}
int main(){
    int n, x;
    cout<<"Enter Size of first Linked List: ";
    cin>>n;
    LinkedList lt1;
    cout<<"Enter Element of First Linked List: ";
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
    cout<<checkEqual(lt1.head,lt2.head);
    return 0;
}