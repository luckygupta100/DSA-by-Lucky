#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>matrixZeroes(vector<vector<int>>&nums){
int n = nums.size();
int m = nums[0].size();
vector<int> col(m, 0);
vector<int> row(n, 0);
int col0=1;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(nums[i][j]==0){
            nums[i][0]=0;
            if(j!=0){
                nums[0][j]=0;
            }
            else
            col0=0;
        }
    }
}
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]!=0){
                if(nums[0][j]==0  || nums[i][0]==0){
                    nums[i][j]=0;
                }
            }
        }
    }
    if(nums[0][0]==0){
        for(int j=0;j<m;j++) nums[0][j]=0;
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            nums[i][0]=0;
        }
    }
    return nums;
}
int main(){int n; int m;
    cin>>n;
    cin>>m;
    vector<vector<int>> nums(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nums[i][j];
        }
    }
    matrixZeroes(nums);
    cout << "Zero Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << nums[i][j] << " ";
        }
        cout << "\n";
    }
}