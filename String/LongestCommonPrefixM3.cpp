#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string lcp(vector<string> &v){
    string temp = v[0];
    int ans_length = temp.size();
    for(int i=1;i<v.size();i++){
        int j=0;
        while(j<temp.size() && j<v[i].size() && temp[j]==v[i][j]){
            j++;
        }
        ans_length = min(ans_length,j);
    }
    return v[0].substr(0,ans_length);
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