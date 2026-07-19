#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Stack{
    queue<int> qu;
public: 
    Stack(){}
    void Push(int x){
        qu.push(x);
        return;
    }
    void Pop(){
        if(qu.empty()) return;
        else if(qu.size() == 1){
            qu.pop();
            return;
        }
        queue<int> temp;
        while(qu.size() !=1){
            temp.push(qu.front());
            qu.pop();
        }
        qu.pop();
        while(!temp.empty()){
            qu.push(temp.front());
            temp.pop();
        }
        return;
    }
    int Top(){
        if(qu.empty()) return INT_MIN;
        return qu.back();
    }
    bool isEmpty(){
        return qu.empty();
    }
};
int main(){
    Stack st;
    st.Push(23);
    st.Push(34);
    st.Push(56);
    st.Push(78);
    st.Push(89);
    st.Pop();
    cout<<st.isEmpty()<<endl;
    while(!st.isEmpty()){
        cout<<st.Top()<<" ";
        st.Pop();
    }
    return 0;
}