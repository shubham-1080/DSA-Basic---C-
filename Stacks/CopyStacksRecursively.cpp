#include<iostream>
#include<stack>
using namespace std;
void copystack(stack<int>&Input, stack<int>&ans){
    if(Input.empty()) return;
    int x = Input.top();
    Input.pop();
    copystack(Input,ans);
    ans.push(x);
    
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
    stack<int> res;
    copystack(st,res);
    while(!res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    } 
    return 0;
}