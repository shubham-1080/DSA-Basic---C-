#include<iostream>
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
    sort(x.begin(),x.end());
    int ans;
    for(int i=0;i<n;i+=3){
        if(x[i] != x[i+1]){
            ans = x[i];
            break;
        }
    }
    cout<<ans;
    return 0;
}