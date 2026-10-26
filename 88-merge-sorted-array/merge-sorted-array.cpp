class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> output;

        for (int i = 0; i < m; i++) {
            output.push_back(nums1[i]);
        }

        for (int i = 0; i < n; i++) {
            output.push_back(nums2[i]);
        }

        sort(output.begin(), output.end());

        for (int i = 0; i < m + n; i++) {
            nums1[i] = output[i];
        }
    }
};