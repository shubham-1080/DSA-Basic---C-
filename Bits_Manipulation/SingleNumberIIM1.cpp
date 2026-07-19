#include<iostream>
#include<vector>
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
    int ans =0;
    for(int i=0;i<31;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if((x[j] & (1<<i))) count++;
        }
        if(count%3==1)
            ans |= (1<<i);
    }
    cout<<ans;
    return 0;
}