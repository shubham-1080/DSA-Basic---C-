#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the Size of both vector: ";
    cin>>m>>n;
    vector<int> v1(m);
    vector<int> v2(n);
    cout<<"Enter Element of 1st Vector: ";
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    cout<<"Enter Element of 2nd Vector: ";
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    set<int> s1;
    for(int i =0;i<m;i++){
        s1.insert(v1[i]);
    }
    int sum = 0;
    for(auto value:s1){
        for(int i=0;i<n;i++){
            if(v2[i]==value){
                sum+=value;
                break;
            }
        }
    }
    cout<<"The sum common values between v1 and v2 is: "<<sum;
    return 0;
}