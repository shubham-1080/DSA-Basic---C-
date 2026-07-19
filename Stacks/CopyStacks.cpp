#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &Input){
    stack<int> temp;
    while(!Input.empty()){
        temp.push(Input.top());
        Input.pop();
    }
    stack<int>ans;
    while(!temp.empty()){
        ans.push(temp.top());
        temp.pop();
    }
    return ans;
}
int main(){
    stack<int> st;
    st.push(12);
    st.push(34);
    st.push(45);
    st.push(56);
    st.push(67);
    st.push(78);
    stack<int> res = copyStack(st);
    while(!res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    } 
    return 0;
}