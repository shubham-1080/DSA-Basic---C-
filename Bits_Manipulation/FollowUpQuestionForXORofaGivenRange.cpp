#include<iostream>
using namespace std;
int XOR(int n){
    int ans =0;
    if(n%4==0) ans = n;
    else if(n%4==1) ans = 1;
    else if(n%4==2) ans = n+1;
    else ans = 0;
    return ans;
}
int main(){
    int l,r;
    cout<<"Enter Range: ";
    cin>>l,r;
    cout<<(XOR(l-1) ^ XOR(r));
    return 0;
}