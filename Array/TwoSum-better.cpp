#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>&nums ,int target){
    map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
    int a = nums[i];
    int more = target-nums[i];
    if(mpp.find(more)!=mpp.end()){
        return {mpp[more], i};
    }
    mpp[a]=i;
}return{-1,-1};
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans = twosum(a,target);
cout << "indices are: " << ans[0] << " " << ans[1];

}