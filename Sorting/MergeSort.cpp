#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&x,int l, int mid, int r){
    int p = mid-l+1;
    int q = r-mid;
    vector<int>a(p);
    vector<int>b(q);
    for(int i=0;i<p;i++){
        a[i] = x[l+i];
    }
    for(int i=0;i<q;i++){
        b[i] = x[mid+1+i];
    }
    int i=0, j=0, k=l;
    while(i<p && j<q){
        if(a[i]>b[j]){
            x[k++] = b[j++];
        }
        else x[k++] = a[i++];
    }
    while(i<p){
        x[k++] = a[i++];
    }
    while(j<q){
        x[k++] = b[j++];
    }
    return;
}
void mergesort(vector<int> &x, int l, int r){
    if(l>=r) return;
    int mid = (r+l)/2;
    mergesort(x,l,mid);
    mergesort(x,mid+1,r);
    merge(x,l,mid,r);
    return;
}
int main(){
    int n ;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<int>x(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    mergesort(x,0, n-1);
    cout<<"The Sorted Array: ";
    for(int m:x){
        cout<<m<<", ";
    }
    return 0;
}