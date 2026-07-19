#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;
    if(s.size()<26){
        cout<<"False";
        return 0;
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char>s1;
    for(char ch:s){
        s1.insert(ch);
    }
    if(s1.size() == 26){
        cout<<"True";
    }
    else cout<<"False";
    return 0;
}