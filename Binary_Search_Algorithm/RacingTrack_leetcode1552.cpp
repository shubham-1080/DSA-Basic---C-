#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canArrange(vector<int>&v,int Max, int p){
    int x = 1;
    int last = v[0];
    for(int i = 1; i<v.size();i++){
        if((v[i]-last)>=Max){
            x++;
            last = v[i];
            if(x>=p) return true;
        }
    }
    return false;
}
int MaxOfMinDistance(vector<int>&v,int player){
    sort(v.begin(),v.end());
    int low = 1, high = v.back()-v.front();
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(canArrange(v,mid,player)){
            ans = mid;
            low = mid +1;
        }
        else high = mid -1;
    }
    return ans;
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
    int player;
    cout<<"Enter Number of Players: ";
    cin>>player;
    cout<<"The minimum distance between any two player is maximum is : "<<MaxOfMinDistance(v,player);
    return 0;
}