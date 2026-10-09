#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&nums){
    int element=nums[0];
    int count =0;
    for(int i=0;i<nums.size();i++){
        if(count == 0){
    element = nums[i];
    count = 1;
}
else if(nums[i] == element){
    count++;
}
else {
    count--;
}
}
int cnt1=0;
for(int i=0;i<nums.size();i++){
    if(nums[i]==element){
    cnt1++;
}
if(cnt1 >(nums.size()/2)){
return element;
}
}return -1;
}
int main() {
    vector<int> nums = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    cout << "majority element is: "<< majorityElement(nums);
    
    
return 0;
}