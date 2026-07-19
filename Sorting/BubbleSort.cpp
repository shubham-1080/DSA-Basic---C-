#include<iostream>
#include<vector>
using namespace std;
void bubblesort( vector<int> &x){
    for(int i=0;i<x.size()-1;i++){
        bool flag = false;
        for(int j=1;j<x.size()-i;j++){
            if(x[j-1]>x[j]){
                swap(x[j-1],x[j]);
                flag = true;
            }
        }
        if(flag == false) break;
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
    bubblesort(x);
    cout<<"The Sorted Array is: ";
    for(int m:x){
        cout<<m<<", ";
    }
    return 0;
}