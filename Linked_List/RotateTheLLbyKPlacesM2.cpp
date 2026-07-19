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
void rotateLL(Node* &head, int k){

    if(head == NULL || head->next == NULL)
        return;

    int len = 1;
    Node* tail = head;

    while(tail->next){
        tail = tail->next;
        len++;
    }

    k = k % len;

    if(k == 0)
        return;

    // Make circular
    tail->next = head;

    int steps = len - k;

    Node* newTail = head;

    while(steps > 1){
        newTail = newTail->next;
        steps--;
    }

    head = newTail->next;

    newTail->next = NULL;
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
    int k;
    cout<<"Enter Value of k: ";
    cin>>k;
    lt.display();
    rotateLL(lt.head,k);
    lt.display();
    return 0;
}