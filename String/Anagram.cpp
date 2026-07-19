#include<iostream>
#include<vector>
using namespace std;
bool anagram( string &s, string &t){
    if(s.size() != t.size()) return false;
    vector<int>f(26,0);
    for(int i=0;i<s.size();i++){
        f[s[i]-'a']++;
        f[t[i]-'a']--;
    }
    for(int x:f){
        if(x !=0) return false;
    }
    return true;
}
int main(){
    string s,t;
    cout<<"Enter s and t: ";
    cin>>s>>t;
    cout<<anagram(s,t);
    return 0;
}