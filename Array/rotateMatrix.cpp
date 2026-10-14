#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>rotateMatrix(vector<vector<int>>& nums){
    int n = nums.size();
    
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        swap(nums[i][j],nums[j][i]);
    }
}
for(int i=0;i<n;i++){
    reverse(nums[i].begin(),nums[i].end());
}
return nums;
}
int main(){int n; int m;
    cin>>n;
    cin>>m;
    vector<vector<int>> nums(n, vector<int>(m));
    if (n != m) {
        cout << "Please enter a square matrix.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nums[i][j];
        }
    }
    rotateMatrix(nums);
    cout << "Rotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << nums[i][j] << " ";
        }
        cout << "\n";
    }
}

