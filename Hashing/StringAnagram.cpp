#include<iostream>
#include<unordered_map>
using namespace std;
bool Anagram(string s1, string s2){
    if(s1.size() != s2.size()) return false;
    unordered_map<char,int>f1;
    for(char ch:s1){
        f1[ch]++;
    }
    for(char ch:s2){
        if(f1.find(ch)==f1.end()) return false;
        else f1[ch]--;
    }
    for(auto x:f1){
        if(x.second != 0) return false;
    }
    return true;

}
int main(){
    string s1, s2;
    cout<<"Enter Two String: ";
    cin>>s1>>s2;
    cout<<(Anagram(s1,s2))? "True":"False";
    return 0;
}