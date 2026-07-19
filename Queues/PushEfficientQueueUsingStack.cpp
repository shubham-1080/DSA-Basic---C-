#include<iostream>
#include<stack>
#include<climits>
using namespace std;
class Queue{
    stack<int> st;
public: 
    Queue(){}
    void Push(int x){
        st.push(x);
        return;
    }
    void Pop(){
        if(st.empty()) return;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return;
    }
    bool isEmpty(){
        return st.empty();
    }
    int Front(){
        if(st.empty()) return INT_MAX;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int res = st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return res;
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