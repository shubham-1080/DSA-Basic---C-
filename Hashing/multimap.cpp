#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    multimap<string,int>directory;
    directory.insert(make_pair("Shubham", 3423));
    directory.insert(make_pair("Soham", 3333));
    directory.insert(make_pair("Saurabh", 7890));
    directory.insert(make_pair("Sahil", 5673));
    directory.insert(make_pair("Satendra", 1121));
    directory.insert(make_pair("Soham", 1202));
    // directory["shubham"]= 2313;  // [] opertor is not allowed in multimap
    multimap<string,int>::iterator itr;
    for(itr = directory.begin();itr != directory.end();advance(itr,1)){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    return 0;
}