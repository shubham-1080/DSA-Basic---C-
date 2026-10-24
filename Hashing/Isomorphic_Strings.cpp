#include<iostream>
#include<unordered_map>
using namespace std;
bool Isomorphic(string s1, string s2){
    if(s1.size() != s2.size()) return false;
    unordered_map<char,char>mp;
    int i;
    for(i= 0;i<s1.size();i++){
        if(mp.find(s1[i])== mp.end()){
            mp[s1[i]] = s2[i];
        }
        else if(mp[s1[i]] != s2[i]) return false;
    }
    mp.clear();
    for(i=0;i<s2.size();i++){
        if(mp.find(s2[i])== mp.end()){
            mp[s2[i]] = s1[i];
        }
        else if(mp[s2[i]] != s1[i]) return false;
    }
    return true;
}
int main(){
    string s1, s2;
    cout<<"Enter Two String: ";
    cin>>s1>>s2;
    cout<<(Isomorphic(s1,s2))? "True":"False";
    return 0;
}