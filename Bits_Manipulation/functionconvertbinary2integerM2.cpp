#include<iostream>
using namespace std;
int convert2decimal(string &s){
    int x=0, p=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1') x+=p;
        p*=2;
    }
    return x;
}
int main(){
    string s;
    cout<<"Enter Binary No. : ";
    cin>>s;
    cout<<convert2decimal(s);
    return 0;
}