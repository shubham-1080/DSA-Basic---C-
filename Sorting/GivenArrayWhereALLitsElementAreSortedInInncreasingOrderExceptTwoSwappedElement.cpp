#include<iostream>
#include<vector>
using namespace std;
void correct(vector<int>&v){
    int first = -1 , second = -1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            if(first == -1) first = i;
            second = i+1;
        }
    }
    swap(v[first], v[second]);
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
    correct(v);
    cout<<"The Correct Sorted Array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<", ";
    }
    return 0;
}