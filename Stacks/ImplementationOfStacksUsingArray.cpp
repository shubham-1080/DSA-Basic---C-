#include<iostream>
#include<climits>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
public:
    Stack(int size){
        this->capacity = size;   // we can also write in this form capacity = size;
        arr = new int[capacity];
        this->top = -1;  
        return;      
    }
    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
        return;
    }
    int pop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top--];
    }
    int gettop(){
        if(this->top == -1){
            cout<<"The Stacks is Empty"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        return this->top == -1;
    }
    int Size(){
        return this->top+1;
    }
    bool isFull(){
        return this->top == this->capacity-1;
    }
};
int main(){
    Stack st(5);
    st.push(23);
    st.push(3);
    st.push(12);
    st.push(43);
    cout<<st.Size()<<endl;
    cout<<st.gettop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    st.push(23);
    cout<<st.isFull()<<endl;
    st.pop();
    cout<<st.gettop()<<endl;
    return 0;
}