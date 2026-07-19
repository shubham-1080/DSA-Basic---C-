#include<iostream>
#include<vector>
using namespace std;
  // do using upperbound and lowerbound concept
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
    cout<<"The Position of target  Array is: ";
    for(int x:ans){
        cout<<x<<", ";
    }
    return 0;
}