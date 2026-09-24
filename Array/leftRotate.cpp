// Left Rotate the array by one place 
#include<bits/stdc++.h>
using namespace std;

int leftRotate(vector<int>& nums, int n){
int temp =nums[0];
for(int i=1;i<n;i++){
    nums[i-1]=nums[i];
}
    nums[n-1]=temp;
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int k =leftRotate(nums,nums.size());
    for (int i = 0; i< nums.size(); i++) {
        cout << nums[i] << " ";
    }


}