#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool Possible(vector<string>&s){
    unordered_map<char,int>freq;
    for(string x:s){
        for(char ch:x){
            freq[ch]++;
        }
    }
    int n = s.size();
    for(auto x:freq){
        if(x.second %n != 0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<string>s(n);
    cout<<"Enter Element of Array of String: ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<Possible(s);
    return 0;
}