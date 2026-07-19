#include<iostream>
using namespace std;
int XOR(int &n){
    int ans =0;
    if(n%4==0) ans = n;
    else if(n%4==1) ans = 1;
    else if(n%4==2) ans = n+1;
    else ans = 0;
    return ans;
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<XOR(n);
    return 0;
}