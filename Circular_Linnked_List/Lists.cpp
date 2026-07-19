#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int>L1{1,2,3,4,5,6};
    auto itr = L1.begin();
    cout<<*itr<<endl;
    cout<<*prev(L1.end())<<endl; // L1.back(); we can use this also
    list<int>L2 = {7, 8, 9, 10};
    cout<<*L2.rbegin()<<endl;
    cout<<L2.front()<<endl;
    auto itr1 = L2.rbegin();
    advance(itr1,2);
    cout<< *itr1<<endl;
    // for traversal we can use auto 
    // this is using range-based loop
    for(auto num:L1){
        cout<<num<<"  ";
    }
    cout<<endl;
    // this is using iterator 
    for(auto itr2 = L2.begin();itr2 != L2.end(); itr2++){
        cout<<*itr2<<" ";
    }
    cout<<endl;
    // we can do reverse traversal
    for(auto itr2 = L1.rbegin();itr2 != L1.rend();itr2++){
        cout<<*itr2<<"  ";
    }

    return 0;
}