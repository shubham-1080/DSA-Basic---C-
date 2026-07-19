#include<iostream>  // most optimal solution
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    vector<int>x(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int ones =0 , twos= 0;
    for(int i=0;i<n;i++){
        ones = ((ones^x[i]) & (~twos));
        twos = ((twos ^ x[i]) & (~ones));
    }
    cout<<ones;
    return 0;
}