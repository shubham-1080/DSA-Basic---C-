#include<iostream>
#include<vector>
using namespace std;
int PeakElement(vector<int>&v){
    if(v.size()==1) return 0;
    int low = 0, high = v.size()-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid == 0){
            if(v[mid]>v[mid+1]) return 0;
            else return 1;
        }
        else if(mid == (v.size()-1)){
            if(v[mid]>v[mid-1]) return mid;
            else return mid-1;
        }
        else{
            if(v[mid]>v[mid-1] && v[mid]>v[mid+1]) return mid;
            else if(v[mid]>v[mid-1]) low = mid +1;
            else high = mid-1;
        }
    }
    return -1;
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
    cout<<"The Peak Element in Array is: "<<PeakElement(v);
    return 0;
}