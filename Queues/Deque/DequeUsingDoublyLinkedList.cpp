#include<iostream>
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
class Deque{
    Node* head;
    Node* tail;
    int Size;
public:
    Deque(){
        head = NULL;
        tail = NULL;
        Size = 0;
    }
    void Push_Front(int x){
        Node* new_node = new Node(x);
        if(head == NULL){
            head = new_node;
            tail = head;
            Size++;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = head->prev;
        Size++;
        return;
    }
    void Push_Back(int x){
        Node* new_node = new Node(x);
        if(tail == NULL){
            tail = new_node;
            head = tail;
            Size++;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = tail->next;
        Size++;
        return;
    }
    void Pop_Back(){
        if(head == NULL) return;
        else if(head == tail){
            Node* temp = tail;
            head = NULL;
            tail = NULL;
            Size--;
            delete temp;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        Size--;
        delete temp;
        return;
    }
    void Pop_Front(){
        if(tail == NULL) return;
        else if(head == tail){
            Node* temp = head;
            head = NULL;
            tail = NULL;
            Size--;
            delete temp;
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        Size--;
        delete temp;
        return;
    }
    int getSize(){
        return Size;
    }
    int Front(){
        if(head == NULL) return INT_MIN;
        return head->val;
    }
    int Back(){
        if(tail == NULL) return INT_MAX;
        return tail->val;
    }
    bool isEmpty(){
        return head == NULL;
    }
};
int main(){
    Deque dq;
    dq.Push_Back(23);
    dq.Push_Back(34);
    dq.Push_Front(67);
    dq.Push_Front(56);
    cout<< dq.isEmpty()<<endl;
    cout<<dq.getSize()<<endl;
    cout<<dq.Front()<<endl;
    cout<<dq.Back()<<endl;
    return 0;
}