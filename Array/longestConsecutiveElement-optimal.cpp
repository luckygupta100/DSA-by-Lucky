#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>&nums){
    int n=nums.size();
    int count=0;
    unordered_set<int> st;
    for(int i=1;i<n;i++){
        st.insert(nums[i]);
    }
}