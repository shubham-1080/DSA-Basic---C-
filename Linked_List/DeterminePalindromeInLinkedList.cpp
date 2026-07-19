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
bool isPalindrome(Node* head){
    // find middle element
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    // break and reverse LL
    Node* curr = slow->next;
    slow->next = NULL;
    Node* pre = NULL;
    while(curr){
        Node* nextNode = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nextNode;
    }
    // compare the LL
    Node* head1 = pre;
    while(head1){
        if(head->val != head1->val) return false;
        head = head->next;
        head1 = head1->next;
    }
    return true;
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
    cout<<isPalindrome(lt.head);
    return 0;
}