#include<iostream>
#include<vector>
using namespace std;
string lcp(vector<string> &v){
    string ans = "";
    for(int i=0;i<v[0].size();i++){
        bool flag = true;
        for(int j=1;j<v.size();j++){
            if(v[0][i] != v[j][i]){
                flag = false;
                break;
            }
        }
        if(flag) ans+=v[0][i];
        else break;
    }
    return ans;
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