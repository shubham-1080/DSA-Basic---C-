#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]<nums[high]) high = mid;
            else if(nums[mid]>nums[high]) low = mid +1;
            else high--;
        }
        return nums[low];
    }
int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter Element of Array: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout <<"The Minimum Element of Array is: " <<findMin(v);

    return 0;
}