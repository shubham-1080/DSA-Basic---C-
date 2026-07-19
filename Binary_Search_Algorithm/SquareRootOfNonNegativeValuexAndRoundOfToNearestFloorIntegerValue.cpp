#include<iostream>
#include<vector>
using namespace std;
int squareroot(int n){   // Binary Search on answer
    if(n==0 ) return 0;
    int l=1, h =n;
    int mid;
    int ans = -1;
    while(l<=h){
        mid = l +(h-l)/2;
        if(mid*mid<=n){
            ans = mid;
            l = mid+1;
        }
        else{
            h= mid-1;
        }
    }
    return ans;
}   // time complexity = O(log x)  space complexity = O(1)
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"The Square Root with Nearest floor integer of "<<n<<" is: "<<squareroot(n);
    return 0;
}