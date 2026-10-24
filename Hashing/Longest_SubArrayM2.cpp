#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int Longest_SubArray(vector<int>&v){
    unordered_map<int,int>mp;
    int ans = 0;
    int prefixsum = 0;
    for(int i=0;i<v.size();i++){
        prefixsum += v[i];
        if(mp.find(prefixsum) != mp.end()){
            ans = i-mp[prefixsum];
        }
        else mp[prefixsum] = i;
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