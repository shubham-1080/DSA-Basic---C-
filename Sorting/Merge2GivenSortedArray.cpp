#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a, vector<int>&b,vector<int>&ans){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) ans[k++] = b[j++];
        else ans[k++] = a[i++];
    }
    while(i<a.size()){
        ans[k++] = a[i++];
    }
    while(j<b.size()){
        ans[k++] = b[j++];
    }
    return;
}
int main(){
    int m, n;
    cout<<"Enter the Size of 1st and 2nd Array: ";
    cin>>m>>n;
    vector<int>a(m);
    vector<int>b(n);
    cout<<"Enter Element of First Sorted Array: ";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter Element of Second Sorted Array: ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>ans(m+n);
    merge(a,b,ans);
    cout<<"The Merge Sorted Array is: ";
    for(int i=0;i<(m+n);i++){
        cout<<ans[i]<<", ";
    }
    return 0;
}