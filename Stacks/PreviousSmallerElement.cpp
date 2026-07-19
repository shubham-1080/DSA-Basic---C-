#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void PreviousSmallerElement(vector<int>&v,vector<int>&ans){
    stack<int> st;
    for(int i =v.size()-1;i>=0;i--){
        while(!st.empty() && v[i]<v[st.top()]){
            ans[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return;
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
    vector<int>ans(n,-1);
    PreviousSmallerElement(v,ans);
    cout<<"The Previous Smaller Element Array is: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
} 