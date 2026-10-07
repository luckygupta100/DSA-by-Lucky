#include<bits/stdc++.h>
using namespace std;
int maxOnes(vector<int>&nums, int n){
    int maxi =0;
    int count =0;
    for(int i=0;i<n;i++){
        if(nums[i]== 1) {
            count++;
            maxi =max(maxi,count);}
        else 
        {
            count =0;
    }
}
        return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Maximum Consecutive Ones: "<< maxOnes(a,n);

}