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
int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' || ch == '/') return 2;
    else if(ch=='+' || ch =='-') return 1;
    return -1;
}
float EvaluationOfInfix(string s){
    stack<float> operand;
    stack<char> operators;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) operand.push(s[i] - '0');
        else if(s[i] == '(') operators.push(s[i]);
        else if(s[i]== ')'){
            while(!operators.empty() and operators.top() != '('){
                float v1 = operand.top();
                operand.pop();
                float v2 = operand.top();
                operand.pop();
                operand.push(operation(v1,v2,operators.top()));
                operators.pop();
            }
            if(!operators.empty()) operators.pop();
        }
        else{
            while(!operators.empty() and precedence(operators.top())>= precedence(s[i])){
                float v1 = operand.top();
                operand.pop();
                float v2 = operand.top();
                operand.pop();
                operand.push(operation(v1,v2,operators.top()));
                operators.pop();
            }
            operators.push(s[i]);
        }
    }
    while(!operators.empty()){
        float v1 = operand.top();
        operand.pop();
        float v2 = operand.top();
        operand.pop();
        operand.push(operation(v1,v2,operators.top()));
        operators.pop();
    }
    return operand.top();
}
int main(){
    string s;
    cout<<"Enter a Infix Expression: ";
    cin>>s;
    cout<<EvaluationOfInfix(s);
    return 0;
}