#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> MaximumSlidingWindow(vector<int>&v, int k){
    vector<int>ans;
    deque<int> dq;
    for(int i=0;i<k;i++){
        while(!dq.empty() and v[dq.back()]<v[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(v[dq.front()]);
    for(int i = k;i<v.size();i++){
        if(dq.front() == (i-k)) dq.pop_front();
        while(!dq.empty() and v[dq.back()]<v[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(v[dq.front()]);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter Size of Element: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cout<<"Enter Size of Window: ";
    cin>>k;
    vector<int>ans;
    ans = MaximumSlidingWindow(v,k);
    cout<<"The Maximum Element Sliding Window is: ";
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}