#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int>&v,int target){
    int l=0, h = v.size()-1;
    int ans = -1;
    int mid;
    while(l <= h){
        int mid = l + (h-l)/2;
        if(v[mid]==target){
            ans = mid;
            h = mid-1;
        }
        else if(v[mid]<target){
            l = mid +1;
        }
        else h = mid-1;
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
    int target;
    cout<<"Enter Target Value: ";
    cin>>target;
    cout<<"The Index of first Occurence of Target Value is: "<<firstoccurence(v,target);
    return 0;
}