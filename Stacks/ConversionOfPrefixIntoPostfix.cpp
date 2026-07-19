#include<iostream>
#include<stack>
using namespace std;
string conversion(string s){
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
        if(isdigit(s[i])) st.push(to_string(s[i]- '0'));
        else{
            string v1 = st.top();
            st.pop();
            string v2 = st.top();
            st.pop();
            string ans = v1+v2+s[i];
            st.push(ans);
        }

    }
    return st.top();
}
int main(){
    string s;
    cout<<"Enter a Prefix Expression: ";
    cin>>s;
    cout<< conversion(s);
    return 0;
}