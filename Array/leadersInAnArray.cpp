#include<bits/stdc++.h>
using namespace std;
vector<int> leaderArray(vector<int>&nums){
    int n=nums.size();
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi=max(maxi,nums[i]);
    }
    return ans;
}
int main() {
    vector<int> nums = {10,22,12,3,0,6};
    vector<int> ans = leaderArray(nums);
    cout << "Leaders in an array: ";
    for (int i = 0; i < ans.size(); i++) {
        cout <<ans[i] << " ";
    }
return 0;
}