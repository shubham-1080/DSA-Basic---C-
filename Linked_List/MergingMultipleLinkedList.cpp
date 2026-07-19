#include<iostream>
#include<vector>
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
Node* MergingMultiple(vector<Node*>head){
    if(head.empty())  return NULL;
    while(head.size()>1){
        Node* h = mergeTheSortedList(head[0],head[1]);
        head.push_back(h);
        head.erase(head.begin());
        head.erase(head.begin());        
    }
    return head[0];
}
int main(){
    LinkedList lt1;
    lt1.insertAtTail(1);
    lt1.insertAtTail(2);
    lt1.insertAtTail(3);
    lt1.insertAtTail(4);

    LinkedList lt2;
    lt2.insertAtTail(2);
    lt2.insertAtTail(6);
    lt2.insertAtTail(8);

    LinkedList lt3;
    lt3.insertAtTail(5);
    lt3.insertAtTail(10);

    LinkedList lt4;
    lt4.insertAtTail(1);
    lt4.insertAtTail(9);

    lt1.display();
    lt2.display();
    lt3.display();
    lt4.display();
    lt1.head = MergingMultiple({lt1.head, lt2.head, lt3.head, lt4.head});
    lt1.display();
    return 0;
}