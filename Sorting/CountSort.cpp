#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countsort(vector<int> &v){
    int  m  = INT_MIN;
    for(int x:v){
        m = max(x,m);
    }
    vector<int>f(m+1,0);
    for(int x:v){
        f[x]++;
    }
    for(int i =1;i<=m;i++){
        f[i]+=f[i-1];
    }
    vector<int>temp(v.size());
    for(int i= v.size()-1;i>=0;i--){
        temp[--f[v[i]]] = v[i];
    }
    v = temp;
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
    countsort(v);
    cout<<"The Sorted Array: ";
    for(int x:v){
        cout<<x<<", ";
    }
    return 0;
}