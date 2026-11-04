class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>result;
     for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
            }
        }
        
     }
     sort(ans.begin(),ans.end());
     for(int i = 0; i < ans.size(); i++) {
            if(i == 0 || ans[i] != ans[i-1]) {
                result.push_back(ans[i]);
            }
        }
     
     return result;
    }   
};