#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    // string s = "Concentration is Harder than ";
    // string s1("study");   Method of intialization string
    // cout<<s<<s1;
    // string s;    // we can initialize string without include string header file
    // cin>>s;     // terminate when get enter or space
    // getline(cin,s);  //  we can also use getline without include string header file
    // cout<<s;
    // char ch = 'A';
    // cout<<(int)ch;  // or cout<<int(ch); 
    // string s = "Concentration is Harder than Study";
    // cout<<s.substr(5, 10)<<endl;
    // reverse(s.begin(),s.end());   // for this i have to include algorithm header file
    // cout<<s;
    // string s1 = "Concentration is Harder than ";
    // string s2("Study");
    // cout<<s1+s2<<endl;
    // s1+=s2;
    // cout<<s1;
    // char s1[20] = "Shubham ";
    // char s2[20] = "Yadav";
    // strcat(s1,s2);  // for this i have to include cstring header file
    // cout<<s1;
    // string s1 = "abcd";
    // char ch = 'e';
    // s1.push_back(ch);
    // cout<<s1<<endl;
    // s1.push_back('f');
    // cout<<s1<<endl;
    // cout<<s1.size() <<endl<<s1.length();
    // char s1[20] = "Shubham ";
    // cout<<strlen(s1);
    int num = 432;
    string s1 = to_string(num);
    s1+="1";
    cout<<s1<<endl;
    num = stoi(s1);
    cout<<num;
    return 0;
}