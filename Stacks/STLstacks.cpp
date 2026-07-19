#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(12);
    st.push(23);
    st.push(24);
    st.push(55);
    st.push(67);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    return 0;
}