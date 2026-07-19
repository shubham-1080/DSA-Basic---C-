#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void enqueue(int x){
        Node* new_node = new Node(x);
        if(head == NULL){
            head = new_node;
            tail = head;
            size++;
            return;
        }
        tail->next = new_node;
        tail = tail->next;
        size++;
        return;
    }
    void dequeue(){
        if(head == NULL) return;
        Node* temp = head;
        head = head->next;
        if(head == NULL) tail = NULL;
        delete temp;
        size--;
        return;
    }
    int getSize(){
        return size;
    }   
    bool isEmpty(){
        return head == NULL;
    } 
    int front(){
        return head->val;
    }
};
int main(){
    Queue qu;
    qu.enqueue(12);
    qu.enqueue(23);
    qu.enqueue(45);
    qu.enqueue(56);
    qu.enqueue(78);
    cout << qu.getSize()<<endl;
    while(!qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.dequeue();
    }
    return 0;
}