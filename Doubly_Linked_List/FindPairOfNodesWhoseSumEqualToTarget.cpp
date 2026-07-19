#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};
class DoublyLinkedList{
public: 
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        return;
    }
    void insertAtTail(int x){
        Node* new_node = new Node(x);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
        return;
    }
};
vector<int> TargetSum(Node* head, Node* tail, int target){
    while(head != tail ){
        if(head->val + tail->val == target) return {head->val, tail->val};
        else if(head->val + tail->val < target) head = head->next;
        else tail = tail->prev;
    }
    return {-1,-1};
}
int main(){
    int n, x;
    cout<<"Enter Size of Element: ";
    cin>>n;
    DoublyLinkedList dll;
    cout<<"Enter Element of Doubly Linked List: ";
    for(int i=0;i<n;i++){
        cin>>x;
        dll.insertAtTail(x);
    }
    int target;
    cout<<"Enter Target Sum: ";
    cin>>target;
    dll.display();
    vector<int>ans = TargetSum(dll.head,dll.tail,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
    return 0;
}