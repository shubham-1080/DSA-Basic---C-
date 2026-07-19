#include<iostream>
using namespace std;
int main(){
    int x,i;
    cin>>x>>i;
    x = (x &(~(1<<i)));
    cout<<x;
    return 0;
}