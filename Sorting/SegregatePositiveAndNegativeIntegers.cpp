#include<iostream>
#include<vector>
using namespace std;
void segregate(vector<int>&v){
    int i=0,j=0,k=v.size()-1;
    while(j<=k){
        if(v[j]<0) swap(v[i++],v[j++]);
        else swap(v[j],v[k--]);
    }
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
    segregate(v);
    cout<<"The Sorted Array is: ";
    for(int x:v){
        cout<<x<<", ";
    }
    return 0;
}