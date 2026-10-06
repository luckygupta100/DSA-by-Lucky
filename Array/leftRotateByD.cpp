// Left Rotate the array by D place
#include<bits/stdc++.h>
using namespace std;
int leftRotate(vector<int> &nums, int d){
    
    reverse(nums.begin(), nums.begin() + d);
    reverse(nums.begin() + d, nums.end());
    reverse(nums.begin(),nums.end());
}
int main() {
    vector<int> nums = {1,2,3,4,5};
    int k =leftRotate(nums,4);
    for (int i = 0; i< nums.size(); i++) {
        cout << nums[i] << " ";
    }


}