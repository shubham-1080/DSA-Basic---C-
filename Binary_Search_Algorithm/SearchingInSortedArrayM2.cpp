#include<iostream>
#include<vector>
using namespace std;
  //using upperbound and lowerbound concept
void searching(vector<int>&v,int target,vector<int>&ans){
    int low = 0, high = v.size()-1;
    int cand = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]>= target){
            high  = mid -1;
            cand = mid;
        }
        else low = mid +1;
    }
    if(cand == -1 || v[cand] != target){
        ans.push_back(-1);
        ans.push_back(-1);
        return;
    }
    else if(v[cand] == target) ans.push_back(cand);
    low = cand+1, high = v.size()-1;
    cand = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(v[mid]<= target){
            cand = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    ans.push_back(cand);
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
    cout<<"Enter Target Element: ";
    cin>>target;
    vector<int>ans;
    searching(v,target,ans);
    cout<<"The Position of target  Array is: ";
    for(int x:ans){
        cout<<x<<", ";
    }
    return 0;
}