#include<iostream>
using namespace std;
int main(){
    int x,i;
    cout<<"Enter a Number: ";
    cin>>x;
    cout<<"Enter value of i : ";
    cin>>i;
    cout<<((x>>i)&1);
    return 0;
}