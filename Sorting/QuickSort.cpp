#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v,int l, int r){
    int i= l-1, j=l;
    int pivot = v[r];
    while(j<r){
        if(v[j]<pivot){
            swap(v[++i],v[j++]);
        }
        else j++;
    }
    swap(v[++i], v[r]);
    return i;
}
void quicksort(vector<int>&v, int l, int r){
    if(l>=r) return;
    int pi = partition(v,l,r);
    quicksort(v,l,pi-1);
    quicksort(v,pi+1,r);
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
    quicksort(v,0,n-1);
    cout<<"The Sorted Array is: ";
    for(int x:v){
        cout<<x<<", ";
    }
    return 0;
}