#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_multiset<int>s1;  // for decending order multiset<int, greater<int>>s1;
    s1.insert(23);
    s1.insert(94);
    s1.insert(45);
    s1.insert(56);
    s1.insert(67);
    s1.insert(88);
    s1.insert(67);
    for(auto value:s1){
        cout<<value<<" ";
    }
    return 0;
}