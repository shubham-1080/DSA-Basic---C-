#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketsort(vector<float> &v, int n){
    vector<vector<float>>b(n, vector<float>());
    for(auto x:v){
        int i = x*n;
        b[i].push_back(x);
    }
    for(int i=0;i<n;i++){
        if(!b[i].empty()){
            sort(b[i].begin(), b[i].end());
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<b[i].size();j++){
            v[k++] = b[i][j];
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<float>v(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bucketsort(v,n);
    cout<<"The Sorted Array is: ";
    for(auto x:v){
        cout<<x<<", ";
    }
    return 0;
}