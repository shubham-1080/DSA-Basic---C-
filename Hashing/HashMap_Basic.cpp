#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,long long, greater<string> >directory;
    directory.insert(make_pair("Ram",34524));
    directory.insert(make_pair("Rakesh",234344));
    directory.insert(make_pair("Ramesh",342341));
    directory.insert(make_pair("Raj",52442234));
    directory.insert(make_pair("Raj",3432111)); // this will ignored because it is already present, it will not update values of the key

    for(auto x:directory){
        cout<<"Name :- "<<x.first<<"  Contact No. :- "<<x.second<<endl;
    }
    cout<<endl;
    directory["Raj"] = 512321;  // this will update the value if it is already present other wise it will insert into the map it it not store duplicate value
    for(auto x:directory){
        cout<<"Name :- "<<x.first<<"  Contact No. :- "<<x.second<<endl;
    }
    cout<<directory.max_size()<<endl;

    //Traversing HashMap using iterator
    map<string,long long>::iterator itr;
    for( itr = directory.begin(); itr != directory.end();itr++){
        cout<<"Name :- "<<itr->first<<"  Contact No. :- "<<itr->second<<endl;
    }
    cout<<endl;
    //Traversing HashMap in reverse order
    map<string,long long>::reverse_iterator itr1;
    for( itr1 = directory.rbegin(); itr1 != directory.rend();itr1++){
        cout<<"Name :- "<<itr1->first<<"  Contact No. :- "<<itr1->second<<endl;
    }
    return 0;
}