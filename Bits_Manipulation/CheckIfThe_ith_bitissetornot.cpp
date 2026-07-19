#include<iostream>
using namespace std;
int main(){
    int x,i;
    cout<<"Enter a Number: ";
    cin>>x;
    cout<<"Enter value of i : ";
    cin>>i;
    if((x & (1<<i) )!=0) cout<<true;
    else cout<<false;
    return 0;
}