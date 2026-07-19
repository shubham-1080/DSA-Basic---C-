#include<iostream>
#include<stack>
using namespace std;
int RemoveBracket(string &s){
    int count = 0;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(!st.empty() && s[i] == ')' && st.top() == '(') st.pop();
            else count++;
        }
    }
    count+= st.size();
    return count;
}
int main(){
    string s;
    cout<<"Enter a String of Sequence of Bracket: ";
    cin>>s;
    cout<<RemoveBracket(s);
    return 0;
}