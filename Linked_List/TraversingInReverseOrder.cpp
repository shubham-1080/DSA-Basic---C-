#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next=NULL;
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
        if(head==NULL){
            head = new_node;
            return;
        }
        Node* temp=head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
        return;
    }
    void display(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<< endl;
        return;
    }
};
void reverse(Node* head){
    if(head==NULL) return;
    reverse(head->next);
    cout<<head->val<<" -> ";
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
    reverse(lt.head);
    return 0;
}