#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>set1;
    set1.insert(23);
    set1.insert(24);
    set1.insert(45);
    set1.insert(56);
    cout<<set1.size()<<endl;
    set1.insert(40);
    set1.insert(57);
    set1.insert(78);
    set1.insert(89);
    set1.insert(90);
    set1.insert(46);
    set1.insert(44);
    cout<<set1.size()<<endl;
    // size remains same beacause duplicate value is added and set contain only unique value.

    // traversing a set
    set<int>::iterator itr;
    for(itr = set1.begin(); itr != set1.end();itr++){
        cout<<*itr<<" ";
    }   // method 1 for traversal
    cout<<endl;
    for(auto it:set1){
        cout<<it<<" ";
    }   // method 2 for traversal using for each loop

    // deletion of element in set
    set1.erase(40);
    cout<<endl;
    for(auto it:set1){
        cout<<it<<" ";
    }
    itr = set1.begin();
    advance(itr,3);
    set1.erase(itr);
    cout<<endl;
    for(auto it:set1){
        cout<<it<<" ";
    }
    set<int>::iterator itr1;
    itr1 = set1.begin();
    advance(itr1,3);
    set<int>::iterator itr2;
    itr2 = set1.begin();
    advance(itr2,6);
    set1.erase(itr1, itr2);
    cout<<endl;
    for(auto it:set1){
        cout<<it<<" ";
    }
    cout<<endl;
    if(set1.find(44) != set1.end()){
        cout<<"Value is Present";
    }
    else cout<<"Value is not present";
    return 0;
}