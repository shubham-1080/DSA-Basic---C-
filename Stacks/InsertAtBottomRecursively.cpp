#include<iostream>
#include<stack>
using namespace std;
void InsetAtBottom(stack<int>&Input, int val){
    if(Input.empty()){
        Input.push(val);
        return;
    }
    int x = Input.top();
    Input.pop();
    InsetAtBottom(Input,val);
    Input.push(x);
    
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
    InsetAtBottom(st,89);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    } 
    return 0;
}