#include<iostream>
#include<vector>
using namespace std;
int PeakElement(vector<int>&arr){
    int low = 0, high = arr.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]>arr[mid+1]) high = mid-1;
            else low = mid + 1;
        }
        return low;
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