#include<iostream>
#include<stack>
#include<climits>
using namespace std;
class Queue{
   stack<int> st;
public:
    Queue(){}
    void Push(int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return;
    }
    void Pop(){
        if(st.empty()) return;
        st.pop();
        return;
    }
    bool isEmpty(){
        return st.empty();
    }
    int Front(){
        if(st.empty()) return INT_MIN;
        return st.top();
    }
};
int main(){
    Queue qu;
    qu.Push(23);
    qu.Push(34);
    qu.Push(56);
    qu.Push(77);
    qu.Push(90);
    qu.Pop();
    qu.Pop();
    while(!qu.isEmpty()){
        cout<< qu.Front()<<" ";
        qu.Pop();
    }
    return 0;
}