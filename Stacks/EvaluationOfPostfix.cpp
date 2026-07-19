#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

float operation(float x, float y, char op){

    switch(op){

        case '+': return y+x;
        case '-': return y-x;
        case '*': return y*x;
        case '^': return pow(y,x);
        case '/':
            if(x==0){
                cout<<"Division by Zero\n";
                return 0;
            }
            return y/x;

        default:
            cout<<"Invalid Operator\n";
            return 0;
    }
}

float EPF(string &s){

    stack<float> st;

    for(char ch : s){

        if(isdigit(ch)){
            st.push(ch-'0');
        }

        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){

            if(st.size()<2){
                cout<<"Invalid Postfix Expression\n";
                return 0;
            }

            float x = st.top();
            st.pop();

            float y = st.top();
            st.pop();

            st.push(operation(x,y,ch));
        }

        else{
            cout<<"Invalid Character\n";
            return 0;
        }
    }

    if(st.size()!=1){
        cout<<"Invalid Postfix Expression\n";
        return 0;
    }

    return st.top();
}

int main(){

    string s;

    cout<<"Enter Postfix Expression: ";
    cin>>s;

    cout<<EPF(s);
}