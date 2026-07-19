#include<iostream>
#include<vector>
using namespace std;
void movezero(vector<int> &v){
    for(int i=1;i<v.size();i++){
        bool flag = false;
        for(int j=0;j<v.size()-1;j++){
            if(v[j]==0 && v[j+1] !=0) {
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
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