
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& nums) {
    int n = nums.size();
    if (n == 0) return {};

    int m = nums[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    vector<int> ans;

    while (top <= bottom && left <= right) {
        // Left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(nums[top][i]);
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(nums[i][right]);
        }
        right--;

        // Right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(nums[bottom][i]);
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(nums[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> nums(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nums[i][j];
        }
    }

    vector<int> ans = spiralMatrix(nums);

    cout << "Spiral Matrix: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
