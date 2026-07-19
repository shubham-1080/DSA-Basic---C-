#include<iostream>
using namespace std;
class Node{
public:
    int x;
    Node* next;
    Node(int data){
        x = data;
        next = NULL;
        return;
    }
};
class Stacks{
    Node* head;
    int sz;
    int capacity;
public:
    Stacks(int c){
        head = NULL;
        sz=0;
        capacity = c;
        return;
    }
    void push(int val){
        if(sz ==  capacity){
            cout<<"Overflow"<<endl;
            return;     
        }
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
        sz++;
        return;
    }
    void pop(){
        if(head == NULL){
            cout<<"Underflow"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        sz--;
        return;
    }
    int size(){
        return sz;
    }
    int top(){
        if(head == NULL){
            cout<<"Stacks is Empty"<<endl;
            return -1;
        }
        return head->x;
    }
    bool isEmpty(){
        return head==NULL;
    }
    bool isFull(){
        return sz==capacity;
    }
};
int main(){
    Stacks st(6);
    st.pop();
    cout<<st.top()<<endl;
    st.push(12);
    st.push(23);
    st.push(45);
    st.push(67);
    st.push(89);
    cout<<st.top()<<endl;
    st.push(42);
    cout<<st.isFull()<<endl;
    cout<<st.top()<<endl;
    return 0;
}