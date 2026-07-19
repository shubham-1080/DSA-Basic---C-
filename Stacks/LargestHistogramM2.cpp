#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
int LargestRectangle(vector<int>&v){
    stack<int> st;
    int ans = INT_MIN;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]<v[st.top()]){
            int ele = v[st.top()];  // current bar to be removed and whose ans will be calc
            st.pop();
            int nsi = i;
            int psi = (st.empty()? (-1) : st.top());
            ans = max(ans, ele*(nsi-psi-1));
            
        }
        st.push(i);
    }
    while(!st.empty()){
        int ele = v[st.top()];
        st.pop();
        int nsi = v.size();
        int psi = (st.empty()? (-1):st.top());
        ans = max(ans, ele*(nsi-psi-1));
    }
    return ans;
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