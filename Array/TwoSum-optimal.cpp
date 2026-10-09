#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>& nums, int target) {
    vector<pair<int, int>> arr;

    // Store each number with its original index
    for (int i = 0; i < nums.size(); i++) {
        arr.push_back({nums[i], i});
    }

    // Sort pairs according to their numbers
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left].first + arr[right].first;

        if (sum == target) {
            return {arr[left].second, arr[right].second};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ans = twosum(a, target);

    cout << "Indices are: " << ans[0] << " " << ans[1];

    return 0;
}