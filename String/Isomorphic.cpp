#include<iostream>
#include<vector>
using namespace std;
bool isomorphic(string &s, string &t){
    if(s.size() != t.size())  return false;
    vector<int>f1(128, -1);
    vector<int>f2(128, -1);
    for(int i=0;i<s.size();i++){
        if(f1[s[i]] != f2[t[i]]) return false;
        else {
            f1[s[i]] = i;
            f2[t[i]] = i;
        }
    }
    return true;
}
int main(){
    string s, t;
    cout<<"Enter s and t : ";
    cin>>s>>t;
    if(isomorphic(s,t)){
        cout<<"They are Isomorphic.";
    }
    else{
        cout<<"They are not Isomorphic.";
    }
    return 0;
}