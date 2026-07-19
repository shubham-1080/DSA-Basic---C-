#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void NextSmallerElement(vector<int>&v,vector<int>&ans){
    stack<int> st;
    for(int i =0;i<v.size();i++){
        while(!st.empty() && v[i]< v[st.top()]){
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
    NextSmallerElement(v,ans);
    cout<<"The Next Smaller Element Array is: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
} 