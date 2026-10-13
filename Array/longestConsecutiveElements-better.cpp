#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>&nums){
    int n=nums.size();
    int count =0;
    int lastSmaller=INT_MIN;
    int largest= 1;
    sort(nums.begin(),nums.end());
    if(nums.size()==0)return 0;
    for(int i=0;i<n;i++){
        if (nums[i] == lastSmaller) {
            continue;
        }
        else if(nums[i]-1==lastSmaller){
            count=count+1;
            lastSmaller=nums[i];
        }
        else{
            count =1;
            lastSmaller= nums[i];
        }
        largest = max(largest,count);
    }
    
    return largest;
    
}
int main(){
    vector<int> nums = {100,102,100,101,4,3,2,3,2,1,1,1,2};
    cout<<"longest consecutive sequence is:"<<longestConsecutive(nums);

}