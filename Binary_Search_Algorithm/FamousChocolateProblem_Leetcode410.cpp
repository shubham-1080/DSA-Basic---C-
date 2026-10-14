#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canDistChoco(vector<int>&v,int max, int s){
    int reqstu = 1;
    int currsum = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>max) return false;
        else if((currsum + v[i]) >max){
            reqstu++;
            currsum = v[i];
            if(reqstu>s) return false;
        }
        else currsum +=v[i];
    }
    return true;
}
int distribute(vector<int>&v,int student){
    int low = *min_element(v.begin(),v.end());
    int high = 0;
    for(int x:v){
        high+=x;
    }
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canDistChoco(v,mid,student)){
            ans = mid;
            high = mid -1;
        }
        else low = mid+1;
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
    int student;
    cout<<"Enter Number of Students: ";
    cin>>student;
    cout<<"The minimum no of maximum chocolate a student can have: "<<distribute(v,student);
    return 0;
}