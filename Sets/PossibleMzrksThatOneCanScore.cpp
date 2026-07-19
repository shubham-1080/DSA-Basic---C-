#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n, p, q;
    cout<<"Enter Number of Question: ";
    cin>>n;
    cout<<"Enter Marks that can get for right answer: ";
    cin>>p;
    cout<<"Enter Marks than can get for wrong answer: ";
    cin>>q;
    if(p== -q){
        cout<<2*n+1;
        return 0;
    }
    unordered_set<int>s1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n and i+j<=n;j++){
            int ans = i*p + j*q;
            s1.insert(ans);
        }
    }
    cout<<s1.size();
    return 0;
}