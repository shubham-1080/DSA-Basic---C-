#include<iostream>
#include<vector>
using namespace std;
class Queue{
    vector<int>v;
    int front;
    int back;
public:
    Queue(){
        front = -1;
        back = -1;
    }
    void enqueue(int data){
        v.push_back(data);
        back++;
        if(back == 0) front++;
        return;
    }
    void dequeue(){
        if( front == back){
            front = -1;
            back = -1;
            v.clear();
            return;
        }
        front++;
        return;
    }
    int getfront(){
        if(front == -1) return -1;
        return v[front];
    }
    bool isEmpty(){
        return front == -1;
    }
    int getSize(){
        return back - front + 1;
    }
};
int main(){
    Queue qu;
    qu.enqueue(12);
    qu.enqueue(34);
    qu.enqueue(67);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(45);
    cout<<qu.getfront();    
    return 0;
}