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
            temp= temp->next;
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
        cout<<"NULL"<<endl;
        return;
    }
};
Node* reversekLL(Node* &head, int k){
    
    Node* pre = NULL;
    Node* curr = head;

    int count = 0;
    while(curr != NULL && count<k){
        Node* pro = curr->next;
        curr->next = pre;
        pre = curr;
        curr = pro;
        count++;
    }
    if(curr != NULL){
        Node* new_head = reversekLL(curr,k);
        head->next = new_head;        
    }
    return pre;

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
    cout<<"Enter value of k: ";
    cin>>k;
    lt.head = reversekLL(lt.head,k);
    lt.display();
    return 0;
}