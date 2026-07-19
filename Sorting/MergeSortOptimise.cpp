#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&v,int l, int mid, int r, vector<int> &temp){
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(v[i]>v[j]){
            temp[k++] = v[j++];
        }
        else temp[k++] = v[i++];
    }
    while(i<=mid){
        temp[k++] = v[i++];
    }
    while(j<=r){
        temp[k++] = v[j++];
    }
    for(int i=l;i<=r;i++){
        v[i] = temp[i];
    }
    return;
}
void mergesort(vector<int>&v, int l, int r, vector<int> &temp){
    if(l>=r) return;
    int mid = l + (r-l)/2;    // to avoid overflow
    mergesort(v,l,mid,temp);
    mergesort(v,mid+1,r,temp);
    merge(v,l,mid,r,temp);
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
    vector<int>temp(n);
    mergesort(v,0,n-1,temp);
    cout<<"The Sorted Array is: ";
    for(int x:v){
        cout<<x<<", ";
    }
    return 0;
}