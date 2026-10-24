#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void PairSum(vector<int>&v,int target, vector<int>&ans){
    unordered_map<int,int>x;
    for(int i=0;i<v.size();i++){
        if(x.find((target -v[i])) != x.end()){
            ans[0] = (x[(target -v[i])]);
            ans[1] = (i);
            return;
        }
        else x[v[i]]=i;
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
    int target;
    cout<<"Enter Target Value: ";
    cin>>target;
    vector<int>ans(2,-1);
    PairSum(v, target,ans);
    cout<<ans[0]<<", "<<ans[1];
    return 0;
}