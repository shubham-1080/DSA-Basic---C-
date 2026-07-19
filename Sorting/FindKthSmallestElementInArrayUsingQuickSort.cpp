#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v,int l, int r){
    int pivot = v[r];
    int i=l-1, j=l;
    while(j<r){
        if(v[j]<=pivot){
            swap(v[j++],v[++i]);
        }
        else j++;
    }
    swap(v[r],v[++i]);
    return i;
}
int ksort(vector<int> &v, int l, int r, int k){
    if(l==r) return v[l];
    int pi = partition(v,l,r);
    if(pi ==k) return v[k];
    else if (k<pi){
        return ksort(v,l,pi-1,k);
    }
    else{
        return ksort(v,pi+1,r,k);
    }
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
    int k;
    cout<<"Enter the position of Smallest Element you want: ";
    cin>>k;
    if (k < 1 || k > n) {
        cout << "Invalid k\n";
        return 0;
    }
    cout<<"The "<<k<<"th smallest element is: "<<ksort(v,0,n-1,k-1);
    return 0;
}