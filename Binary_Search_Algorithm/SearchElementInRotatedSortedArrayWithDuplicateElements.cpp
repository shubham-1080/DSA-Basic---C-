#include<iostream>
#include<vector>
using namespace std;
 // from chatgpt
/* bool search(vector<int>& v, int target){
    int l = 0, h = v.size() - 1;

    while(l <= h){
        int mid = l + (h - l) / 2;

        if(v[mid] == target)
            return true;

        // Handle duplicates
        if(v[l] == v[mid] && v[mid] == v[h]){
            l++;
            h--;
        }

        // Left half is sorted
        else if(v[l] <= v[mid]){
            if(target >= v[l] && target < v[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }

        // Right half is sorted
        else{
            if(target > v[mid] && target <= v[h])
                l = mid + 1;
            else
                h = mid - 1;
        }
    }

    return false;
} */
 // done by self
bool search(vector<int>&v, int target){
    int low = 0, high = v.size()-1;
        while(low<=high){
            if(v[low] == v[high]){
                if(v[low]== target) return true;
                while(low < high && v[low]==v[high]){
                    low++;
                    high--;
                }
            }
            int mid = low + (high - low)/2;
            if(v[mid]== target) return true;
            else if(v[mid]>=v[low]){
                if(v[mid]>=target && v[low]<= target) high =  mid-1;
                else low = mid + 1;
            }
            else {
                if(v[mid]<=target && v[high]>=target) low = mid +1;
                else high = mid-1;
            }
        }
        return false;
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

    int target;
    cout << "Enter Target Element: ";
    cin >> target;

    cout << search(v, target);

    return 0;
}