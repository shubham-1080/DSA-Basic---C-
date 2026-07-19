#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string> set1;
    int n;
    cout<<"Enter Numbers of Names: ";
    cin>>n;
    string s;
    cout<<"Enter Name of List: ";
    for(int i=0;i<n;i++){
        cin>>s;
        set1.insert(s);
    }
    cout<<"THe Final List is : ";
    for(auto value: set1){
        cout<<value<<" ";
    }
    return 0;
}
