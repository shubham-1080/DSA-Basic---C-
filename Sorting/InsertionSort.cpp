#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &x){
    for(int i=1;i<x.size();i++){
        for(int j=i;j>0;j--){
            if(x[j-1] >x[j]) swap(x[j],x[j-1]);
            else break;
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<int>x(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    insertionsort(x);
    cout<<"The Sorted Array: ";
    for(int m:x){
        cout<<m<<", ";
    }
    return 0;
}