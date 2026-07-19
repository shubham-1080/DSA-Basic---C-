#include<iostream>
#include<vector>
using namespace std;
void sort(vector<string> &v){
    for(int i=1;i<v.size();i++){
        for(int j=i;j>0;j--){
            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
            }
            else break;
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<string>v(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    sort(v);
    cout<<"The Sorted Array: ";
    for(string s:v){
        cout<<s<<", ";
    }
    return 0;
}