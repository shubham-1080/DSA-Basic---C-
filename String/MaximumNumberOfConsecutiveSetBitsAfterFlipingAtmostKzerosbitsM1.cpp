#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestsubstring(string &s, int k){
    int count =0;
    for(int i=0;i<s.size();i++){
        int temp =0;
        int j;
        for(j=i;j<s.size();j++){
            if(s[j]=='0') temp++;
            if(temp>k) break;
        }
        count = max(count,j-i);
    }
    return count;
}
int main(){
    string s;
    cout<<"Enter Binary String: ";
    cin>>s;
    int k;
    cout<<"Enter Number atmost 0's can be flip: ";
    cin>>k;
    cout<<longestsubstring(s,k);
    return 0;
}