
#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& nums, int n) {
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (nums[i] != nums[j]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int k = removeDuplicate(nums, nums.size());

    cout << "Unique elements: " << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}