#include<iostream>
#include<vector>
using namespace std;
int  rotatedsorted(vector<int>&v){
    if(v.size() ==1) return 0;
    int l=0, h= v.size()-1;
    if(v[l]<v[h]) return l;  // sorted Array
    int mid;
    while(l<=h){
        mid = l + (h-l)/2;
        if(v[mid]>v[mid+1]) return mid+1;
        if(v[mid]<v[mid-1]) return mid;
        if(v[mid]>v[l]) l = mid+1;
        else h = mid-1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Element of Array: ";
    for(int i =0 ;i<n;i++){
        cin>>v[i];
    }
    cout<<"The Minimum Element is: "<< rotatedsorted(v);
    return 0;
}