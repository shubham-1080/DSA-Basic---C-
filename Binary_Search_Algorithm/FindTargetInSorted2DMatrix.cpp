#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int low = 0, high = m*n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int row = mid/n;
        int col = mid%n;
        if(matrix[row][col]==target) return true;
        else if(matrix[row][col]<target) low = mid +1;
        else high = mid -1;
    }
    return false;
}
int main(){
    int row, col;
    cout<<"Enter Number of Row and Column of Matrix: ";
    cin>>row>>col;
    vector<vector<int>>v(row,vector<int>(col));
    cout<<"Enter Element of Matrix: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }
    int target;
    cout<<"Enter Target Value: ";
    cin>>target;
    cout<<searchMatrix(v,target);
    return 0;
}