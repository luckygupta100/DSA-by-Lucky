#include<bits/stdc++.h>
using namespace std;
int stock(vector<int>&nums){
    int mini = nums[0];
    int profit = 0;
    for(int i=1;i<nums.size();i++){
        int cost =nums[i]-mini;
        profit=max(profit,cost);
        mini= min(mini, nums[i]);
    }
    return profit;
}
int main(){
    vector<int> nums = {7,1,5,3,13,4};
    cout<<"Profit:"<< stock(nums);
}