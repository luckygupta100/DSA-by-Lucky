#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>a){
    map<int,int>mpp;
    for(int i=0;i <a.size();i++){
        mpp[a[i]]++;
    }
    for(auto it :mpp){
        if(it.second > (a.size()/2)){
            return it.first;
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {2,3,3,3,1,3,2};
    cout << "majority element is: "<< majorityElement(nums);
    
    
return 0;
}