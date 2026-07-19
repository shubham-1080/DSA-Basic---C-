// design stack contain following things push,pop,top,getmin,
#include<iostream>
#include<climits>
#include<stack>
using namespace std;
#define ll long long int
class MinStack {
public:
    stack<ll>st;
    ll mn;
    MinStack() {
        mn = INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            mn = val;
            st.push(0);
            return;
        }
        st.push((ll)val-mn);
        if(mn>val) mn = val;
        return;
    }
    
    void pop() {
       if(!st.empty()){
            if(st.top() <0){
                mn = mn-st.top();
            }
            st.pop();
            return;
        }
        
    }
    
    int top() {
        if(st.top()<0) return mn;
        return st.top()+mn;
    }
    
    int getMin() {
        return mn;
    }
};

int main(){
      
    return 0;
}
