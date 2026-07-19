#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class CircularQueue{
    vector<int>v;
    int front;
    int back;
    int currsize;
public:
    CircularQueue(int n){
        v.resize(n);
        front = 0;
        back = n-1;
        currsize = 0;
    }
    void enqueue(int data){
        if(isFull()) return;
        back = (back+1)% v.size();
        v[back] = data;
        currsize++;
        return; 
    }
    void dequeue(){
        if(isEmpty()) return;
        front = (front+1) % v.size();
        currsize--;
        return;
    }
    int getfront(){
        if(isEmpty()) return INT_MIN;
        return v[front]; 
    }
    bool isEmpty(){
        return currsize == 0;
    }
    int getSize(){
        return currsize;
    }
    bool isFull(){
        return currsize == v.size();
    }
};
int main(){
    CircularQueue qu(10);
    qu.enqueue(12);
    qu.enqueue(34);
    qu.enqueue(67);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(45);
    qu.enqueue(34);
    qu.enqueue(67);
    cout<<qu.getfront()<<endl;
    cout<<qu.isFull()<<endl;
    while(!qu.isEmpty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
    }    
    return 0;
}