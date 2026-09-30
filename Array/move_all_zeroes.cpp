// move all zeroes to the end of the array.
#include<bits/stdc++.h>
using namespace std;
int moveZeroes(vector<int>&nums ,int n){
    // step 1
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    // step 2
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        nums[i]=temp[i];
    }

    // step 3
    for(int i=nz; i<n;i++){
        nums[i]=0;
    }


    
}
int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums, n);

    cout << "Move zeroes: ";

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;

}






