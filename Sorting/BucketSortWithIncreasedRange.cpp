#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// void bucketsort(vector<float> &v, int n){
//     vector<vector<float>>b(n, vector<float>());
//     float mi =v[0];
//     float ma= v[0];
//     for(auto p:v){
//         mi =  min(mi,p);
//         ma = max(ma,p);
//     }
//     float range = (ma-mi)/n;
//     for(auto x:v){
//         int i = (x-mi)/range;
//         float diff = (x-mi)/range - i;
//         if(diff==0 && x !=mi){
//             b[i-1].push_back(x);
//         }
//         else{
//             b[i].push_back(x);
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(!b[i].empty()){
//             sort(b[i].begin(), b[i].end());
//         }
//     }
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<b[i].size();j++){
//             v[k++] = b[i][j];
//         }
//     }
//     return;
// }      // learn by youtube 
void bucketSort(vector<float>& v){

    int n = v.size();

    float mn = *min_element(v.begin(), v.end());
    float mx = *max_element(v.begin(), v.end());

    if(mx == mn)
        return;

    vector<vector<float>> buckets(n);

    for(float x : v){

        int idx = (x - mn) * n / (mx - mn);

        if(idx == n)
            idx = n - 1;

        buckets[idx].push_back(x);
    }

    for(auto &bucket : buckets)
        sort(bucket.begin(), bucket.end());

    int k = 0;

    for(auto &bucket : buckets){
        for(float x : bucket){
            v[k++] = x;
        }
    }
}     // chatgpt
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    vector<float>v(n);
    cout<<"Enter Element of Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bucketSort(v);
    cout<<"The Sorted Array is: ";
    for(auto x:v){
        cout<<x<<", ";
    }
    return 0;
}