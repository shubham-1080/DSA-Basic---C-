#include<iostream>
#include<algorithm>
using namespace std;
string convert2binary(int &n){
    string s="";
    while(n!=0){
        s += to_string(n%2);
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<convert2binary(n);
    return 0;
}