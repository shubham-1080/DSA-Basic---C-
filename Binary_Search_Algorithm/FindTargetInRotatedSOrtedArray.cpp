#include<iostream>
#include<vector>
using namespace std;
int  rotatedsorted(vector<int>&v, int target){
    int l=0, h= v.size()-1;
    int mid;
    while(l<=h){
        mid = l + (h-l)/2;
        if(v[mid]== target) return mid;
        if(v[mid] >= v[l]){
            if(target >=v[l] && target<= v[mid]){
                h = mid-1;
            }
            else l = mid +1;
        }
        else{
            if(target >=v[l] && target<= v[mid]){
                l = mid+1;
            }
            else h = mid-1;

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
    for(int i =0 ;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter Target Value: ";
    cin>>target;
    cout<<"The Minimum Element is: "<< rotatedsorted(v, target);
    return 0;
}