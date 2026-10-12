#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>&nums){
    int n =nums.size();
    int gola_index = -1;
    for(int i=n-1; i>0 ; i--){
        if(nums[i]>nums[i-1]){
            gola_index = i - 1;
            break;
        }
    }
    if(gola_index!=-1){
        int swapindex=gola_index;
        for(int j=n-1;j>=gola_index+1;j--){
            if(nums[j]>nums[gola_index]){
                swapindex=j;
                break;
            }
        }
        swap(nums[gola_index],nums[swapindex]);
        reverse(nums.begin() +gola_index+1,nums.end());
    }

}
int main() {
    vector<int> nums = {1,3,4,5,2};
    nextPermutation(nums);
    cout << "Next Permutation: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
return 0;
}