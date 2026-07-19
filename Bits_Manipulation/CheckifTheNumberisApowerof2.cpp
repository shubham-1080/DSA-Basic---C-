#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if((x & (x-1))==0) cout<<"true";
    else cout<<"false";
    return 0;
}