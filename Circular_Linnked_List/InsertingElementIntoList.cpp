#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int>L1{1,2,3,4,5,6,8,9,10};
    auto itr = L1.begin();
    advance(itr,4);
    L1.insert(itr,12);
    for(auto num:L1){
        cout<<num<<"  ";
    }
    cout<<endl;
    L1.insert(itr,2,9);
    for(auto num:L1){
        cout<<num<<"  ";
    }
    cout<<endl;
    auto l = L1.begin();
    auto r = L1.end();
    advance(r,6);       // here r will never take exceed the itr
    L1.insert(itr,l,r);
    for(auto num:L1){
        cout<<num<<"  ";
    }
    cout<<endl;

    return 0;
}