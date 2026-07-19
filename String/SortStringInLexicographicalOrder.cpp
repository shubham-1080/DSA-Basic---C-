#include<iostream>
#include<vector>
using namespace std;
void lexicographical(string &s){
    vector<int>f(26,0);
    for(char ch:s){
        f[ch-'a']++;
    }
    s="";
    for(int i=0;i<26;i++){
        while(f[i] !=0){
            s+= (char)(i+'a');
            f[i]--;
        }
    }
    return;

}
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    lexicographical(s);
    cout<<"The Sorted Array is: "<<s;
    return 0;
}