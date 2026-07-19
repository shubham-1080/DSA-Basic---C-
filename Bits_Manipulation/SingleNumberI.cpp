#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<int>x(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=1;i<n;i++){
        x[i] = x[i]^x[i-1];
    }
    cout<<x[n-1];
    return 0;
}