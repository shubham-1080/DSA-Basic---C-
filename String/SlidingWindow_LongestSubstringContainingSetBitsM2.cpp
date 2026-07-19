#include<iostream>
using namespace std;
int slidingWindow(string &s,int k){
    int st=0,e=0,length=0, zero=0;
    while(e<s.size()){
        if(s[e]=='0'){
            zero++;
        }
        while(zero>k){
            if(s[st]=='0') zero--;
            st++;
        }
        length = max(length,e-st+1);
        e++;
    }
    return length;
}
int main(){
    string s;
    cout<<"Enter Binary String: ";
    cin>>s;
    int k;
    cout<<"Enter Number atmost 0's can be flip: ";
    cin>>k;
    cout<<slidingWindow(s,k);
    return 0;
}