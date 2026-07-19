#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<__builtin_popcount(x)<<endl;   // predefined builtin function
    int count =0;
    while(x>0){
        count += x & 1;
        x = x>>1;
    }
    cout<<count;
    return 0;
}