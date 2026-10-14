#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>>&nums){
    int n = nums.size();
int m = nums[0].size();
vector<int> col(m, 0);
vector<int> row(n, 0);
if (nums.empty()) return nums;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]){
                nums[i][j]=0;
            }
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
    zeroMatrix(nums);
    cout << "Zero Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << nums[i][j] << " ";
        }
        cout << "\n";
    }
}