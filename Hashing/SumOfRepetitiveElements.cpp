#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Element: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Element of Vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum = 0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    map<int,int>::iterator itr;
    for(itr = m.begin();itr != m.end(); itr++){
        if(itr->second>1) sum += itr->first;
    }
    cout<<sum;
    return 0;
}