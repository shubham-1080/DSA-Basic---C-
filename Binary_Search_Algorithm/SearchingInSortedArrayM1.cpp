#include<iostream>
#include<vector>
using namespace std;
void searching(vector<int>&v, vector<int>&ans, int target){
    int l = 0, r=v.size()-1;
    int mid,ans1=-1,ans2=-1;
    while(l<=r){
        mid = l +(r-l)/2;
        if(v[mid]>=target){
            r = mid-1;
            if(v[mid]==target) ans1 = mid;
        }
        else l = mid+1;
    }
    if(ans1 != -1){
        l = ans1+1;
        ans2 = ans1;
    }
    else {
        ans.push_back(ans1);
        ans.push_back(ans2);
        return;
    }
    r=v.size()-1;
    while(l<=r){
        mid = l +(r-l)/2;
        if(v[mid]<=target){
            l = mid+1;
            if(v[mid] == target) ans2 = mid;
        }
        else if(v[mid]<target) l = mid+1;
        else r = mid-1;
    }
    ans.push_back(ans1);
    ans.push_back(ans2);
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
    searching(v,ans, target);
    cout<<"The Position of target  Array is: ";
    for(int x:ans){
        cout<<x<<", ";
    }
    return 0;
}