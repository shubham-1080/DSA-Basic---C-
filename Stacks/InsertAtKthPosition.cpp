#include<iostream>
#include<stack>
using namespace std;
void InsertAtKthPosition(stack<int> &Input, int val, int k){
    if(Input.size() < k-1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    stack<int> temp;
    while(Input.size() != k-1){
        temp.push(Input.top());
        Input.pop();
    }
    Input.push(val);
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
    InsertAtKthPosition(st,90,4); 
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }   
    return 0;
}