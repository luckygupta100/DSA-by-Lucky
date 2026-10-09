#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int>&nums, int n){
    int low=0,mid=0,high=n-1;
    while (mid <= high) {
    if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        low++;
        mid++;
    }
    else if(nums[mid]==1){
        mid++;
    }
    else if(nums[mid]==2){
        swap(nums[mid],nums[high]);
        high--;
    }
}}
int main() {
    vector<int> nums = {0,1,1,0,1,2,1,2,0,0,0};
    sortArray(nums, nums.size());
    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
return 0;
}