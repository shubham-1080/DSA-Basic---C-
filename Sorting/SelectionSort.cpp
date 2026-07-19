#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &x){
    for(int i=0;i<x.size()-1;i++){
        int idx=i;
        bool flag = false;
        for(int j=i+1;j<x.size();j++){
            if(x[idx]>x[j]){
                idx = j;
                flag= true;
            }
        }
        if(flag) swap(x[i],x[idx]);
    }
    return;
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    vector<int>x(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    selectionsort(x);
    cout<<"The Sorted Array: ";
    for(int m:x){
        cout<<m<<", ";
    }
    return 0;
}