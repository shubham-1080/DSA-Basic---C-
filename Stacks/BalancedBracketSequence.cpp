#include<iostream>
#include<stack>
using namespace std;
bool BalancedBracketSequence(string &s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
        else{
            if(s[i] == ')' and !st.empty() and st.top() == '('){
                st.pop();
            }
            else if(s[i] == '}' and !st.empty() and st.top() == '{'){
                st.pop();
            }
            else if(s[i] == ']' and !st.empty() and st.top() == '['){
                st.pop();
            }
            else return false;
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter Input Parenthesis Sequences: ";
    cin>>s;
    cout<<BalancedBracketSequence(s);
    return 0;
}