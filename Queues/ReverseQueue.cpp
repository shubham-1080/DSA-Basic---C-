#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void Reverse( queue<int> &qu){
    stack<int> st;
    while(!qu.empty()){
        st.push(qu.front());
        qu.pop();
    }
    while(!st.empty()){
        qu.push(st.top());
        st.pop();
    }
    return;
}
int main(){
    queue<int> qu;
    qu.push(12);
    qu.push(23);
    qu.push(45);
    qu.push(89);
    qu.push(67);
    Reverse(qu);
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
}