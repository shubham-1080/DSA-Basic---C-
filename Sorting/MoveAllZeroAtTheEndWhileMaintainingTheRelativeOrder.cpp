#include<iostream>
#include<vector>
using namespace std;
void movezero(vector<int> &v){
    int count=0;
    for(int i=0;i<v.size()-count;i++){
        if(v[i]==0){
            count++;
            v.erase(v.begin()+i);
            i--;
        }
    }
    while(count !=0){
        v.push_back(0);
        count--;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    movezero(v);
    cout<<"The Sorted Array is: ";
    for(int x:v){
        cout<<x<<", ";
    }
    return 0;
}