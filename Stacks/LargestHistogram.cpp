#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int LargestRectangle(vector<int>&v){
    vector<int>preSmaller(v.size(),-1);
    vector<int>nextSmaller(v.size(), v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]<v[st.top()]){
            nextSmaller[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    stack<int>st1;
    for(int i=v.size()-1;i>=0;i--){
        while(!st1.empty() && v[i]<v[st1.top()]){
            preSmaller[st1.top()] = i;
            st1.pop();
        }
        st1.push(i);
    }
    int x = -1;
    for(int i=0;i<v.size();i++){
        x = max(x, (v[i]*(nextSmaller[i]-preSmaller[i]-1)));
    }
    return  x;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"The Largest Rectangle in Histogram is : "<<LargestRectangle(v);
    return 0;
}