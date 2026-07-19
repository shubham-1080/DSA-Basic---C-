#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countingsort(vector<int>&v, int pos){
    vector<int>f(10, 0);
    for(int x:v){
        f[((x/pos) %10)]++;
    }
    for(int i=1;i<10;i++){
        f[i] +=f[i-1];
    }
    vector<int>temp(v.size());
    for(int i=v.size()-1;i>=0;i--){
        temp[--f[(v[i]/pos)%10]] = v[i];
    }    
    v= temp;
    return;
}
void radixsort(vector<int> &v){
    int m = INT_MIN;
    for(int x:v){
        m = max(m,x);
    }
    for(int pos =1;(m/pos)>0;pos*=10){
        countingsort(v,pos);
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
    radixsort(v);
    cout<<"The Sorted Array: ";
    for(int x:v){
        cout<<x<<", ";
    }
    return 0;
}