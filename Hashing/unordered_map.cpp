#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>m;
    m.insert(make_pair(1,"Shubham"));
    m[2] = "Rohan";
    m[3] = "kunal";
    for(auto itr:m){
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    return 0;
}