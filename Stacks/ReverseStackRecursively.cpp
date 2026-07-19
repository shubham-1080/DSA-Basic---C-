#include<iostream>
#include<stack>
using namespace std;
void ReverseStack(stack<int> &Input){
    if(Input.empty()) return;
    int x = Input.top();
    Input.pop();
    ReverseStack(Input);
    stack<int> temp;
    while(!Input.empty()){
        temp.push(Input.top());
        Input.pop();
    }
    Input.push(x);
    while(!temp.empty()){
        Input.push(temp.top());
        temp.pop();
    }
    return;
}
int main(){
    stack<int> st;
    st.push(12);
    st.push(34);
    st.push(45);
    st.push(56);
    st.push(67);
    st.push(78);
    ReverseStack(st); 
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}