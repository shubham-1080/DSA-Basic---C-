#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    vector<int>num(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    return 0;
}