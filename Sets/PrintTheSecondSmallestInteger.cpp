#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    set<int>s1;
    int x;
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>x;
        s1.insert(x);
    }
    if(s1.size()<2){
        cout<<-1;
    }
    else{
        set<int> ::iterator itr;
        itr = s1.begin();
        itr++;
        cout<<*itr;
    }
    return 0;
}