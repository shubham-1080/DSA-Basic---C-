#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&v,int l, int r,int target){
    if(l>r) return -1;
    int mid = l + (r-l)/2;
    if(v[mid]==target ) return mid;
    else if(v[mid]< target) return binarysearch(v,mid+1,r,target);
    else return binarysearch(v,l,mid-1,target);
}   // recursive binary search   // time complexity = O(log n) space complexity = O(log n)
// int binarysearch(vector<int>&v,int target){
//     int l=0, h= v.size()-1;
//     int mid;
//     while(l<=h){
//         mid = l +(h-l)/2;  // to avoid overflow
//         if(v[mid]==target) return mid;
//         else if(v[mid]<target){
//             l=mid+1;
//         }
//         else h=mid-1;
//     }
//     return -1;
// } // using iteration    // time complexity = O(log n) space complexity = O(1)

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
    cout<<"The Index of Target Value is: "<<binarysearch(v,0,n-1,target);
    return 0;
}