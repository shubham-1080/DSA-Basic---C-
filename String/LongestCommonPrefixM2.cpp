#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string lcp(vector<string> &v){
    sort(v.begin(),v.end());
    string s="";
    int i=0;
    while(i<v[0].size() && i<v.back().size()){
        if(v[0][i] == v.back()[i]) s+=v[0][i];
        else break;
        i++;
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<string>v(n);
    cout<<"Entere Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"The Longest Common Prefix is: "<<lcp(v);
    return 0;
}