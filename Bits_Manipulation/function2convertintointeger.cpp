#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int convert2integer(string &s){
    reverse(s.begin(),s.end());
    int x=0;
    for(int i=s.size()-1;i>=0;i--){
        x +=((s[i] - '0')*pow(2,i));
    }
    return x;
}
int main(){
    string s;
    cout<<"Enter Binary No. : ";
    cin>>s;
    cout<<convert2integer(s);
    return 0;
}