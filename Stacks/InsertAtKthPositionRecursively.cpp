#include<iostream>
#include<stack>
using namespace std;
void InsertAtKthPosition(stack<int>&Input, int val, int k){
    if(Input.size() == k-1){
        Input.push(val);
        return;
    }
    int x = Input.top();
    Input.pop();
    InsertAtKthPosition(Input,val, k);
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
    InsertAtKthPosition(st,89,4);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    } 
    return 0;
}