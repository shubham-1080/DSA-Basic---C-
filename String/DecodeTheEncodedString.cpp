#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string decode(string &s){
    string results = "";
    for(int i=0;i<s.size();i++){
        if(s[i] != ']') results +=s[i];
        else{
            string str= "";
            int j=results.size()-1;
            while(!results.empty() && results[j] !='['){
                str += results[j];
                results.pop_back();
                j--;
            }
            reverse(str.begin(),str.end());
            string nums="";
            j--;
            results.pop_back();
            while(!results.empty() && results[j]>='0' && results[j]<='9'){
                nums +=results[j];
                results.pop_back();
                j--;
            }
            reverse(nums.begin(),nums.end());
            int num = stoi(nums);
            while(num!=0){
                results +=str;
                num--;
            }
        }
    }
    return results;
}
int main(){
    string s;
    cout<<"Enter Encoded String: ";
    cin>>s;
    cout<<"The Decoded Stirng is: "<<decode(s);
    return 0;
}