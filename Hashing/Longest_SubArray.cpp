#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int Longest_SubArray(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i] +=v[i-1];
    }
    unordered_map<int,int>mp;
    int ans = 0;
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i]) != mp.end()){
            ans = i-mp[v[i]];
        }
        else mp[v[i]] = i;
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
    cout<<Longest_SubArray(v);
    return 0;
}